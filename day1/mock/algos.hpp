#pragma once

#include <cstddef>

/**
 * Returns the leftmost index of an element equal to `elem`.
 *
 * If such an element is not present, returns `cnt.size()`. Stops
 * searching once an equal element is found.
 */
template <typename Container, typename T>
std::size_t find(Container const& cnt, T const& elem) {
    std::size_t idx = cnt.size();
    for (std::size_t i = 0; i < cnt.size(); ++i) {
        if (cnt[i] == elem && i < idx) {
            return i;
        }
    }
    return idx;
}
