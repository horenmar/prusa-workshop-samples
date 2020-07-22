#pragma once

#include <cassert>
#include <cstddef>

class timestamp_source {
public:
    virtual ~timestamp_source() = default;

    //! Returns timestamp of us since some point in time
    virtual size_t timestamp() const = 0;
};

//! Implements timestamp_source using std::chrono::monotonic_clock
class monotonic_system_clock : timestamp_source {
public:
    // Let's pretend we did the implementation work :-)
    size_t timestamp() const override;
};

/**
 * Simple class that measures elapsed time
 *
 * The measurement starts at construction, but can be restarted with
 * via `restart`.
 */
class stopwatch {
    timestamp_source* m_source;
    size_t m_start;
public:
    //! Starts running the stopwatch
    stopwatch(timestamp_source* source):
        m_source(source),
        m_start(m_source->timestamp())
    {}

    //! Restarts the timing
    void restart() {
        m_start = m_source->timestamp();
    }

    size_t us_since_start() const {
        const auto now = m_source->timestamp();
        assert(now >= m_start && "Current timestamp is older than start timestamp. Clock drift?");
        return now - m_start;
    }
};
