#include "stopwatch.hpp"

#include <catch2/catch_test_macros.hpp>

#include "trompeloeil.hpp"

class mock_clock : public trompeloeil::mock_interface<timestamp_source> {
public:
    IMPLEMENT_CONST_MOCK0(timestamp);
};

TEST_CASE("Testing stopwatch with mock implementation of timestamp source", "[stopwatch]") {
    mock_clock mc;
    REQUIRE_CALL(mc, timestamp())
        .RETURN(size_t(2));

    SECTION("Plain construction") {
        stopwatch sw(&mc);
    }

    SECTION("Reset takes another time sample") {
        stopwatch sw(&mc);
        REQUIRE_CALL(mc, timestamp())
            .RETURN(size_t(3));
        sw.restart();
    }
}
