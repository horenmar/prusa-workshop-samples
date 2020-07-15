#include "factorial.hpp"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("Basic inputs", "[factorial]") {
    // Are there inputs missing?
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(5) == 120);
    REQUIRE(factorial(10) == 3628800);
}
