#include "factorial.hpp"

#include <catch2/catch_test_macros.hpp>

#include <stdexcept>

TEST_CASE("Basic inputs", "[factorial]") {
    // Are there inputs missing?
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(5) == 120);
    REQUIRE(factorial(10) == 3628800);
    REQUIRE(factorial(0) == 1);

    REQUIRE(factorial(std::numeric_limits<int>::max()) == 0);

    REQUIRE(factorial(-1) == -1);
    REQUIRE(factorial(-4) == -1);
    //REQUIRE_THROWS_AS(factorial(-1), std::runtime_error);
}
