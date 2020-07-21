#include "id-types.hpp"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("Basic operations on Key", "[key][ids]") {
    Key k1{ 1 };
    Key k2{ 2 };
    REQUIRE(to_index(k1) == 1);
    REQUIRE(to_index(k2) == 2);
    REQUIRE(k1 == Key{ 1 });
    REQUIRE(Key{ 1 } != k2);
    REQUIRE(k1 < k2);
}

TEST_CASE("Basic operations on Lock", "[lock][ids]") {
    Lock l1{ 1 };
    Lock l2{ 2 };
    REQUIRE(to_index(l1) == 1);
    REQUIRE(to_index(l2) == 2);
    REQUIRE(l1 == Lock{ 1 });
    REQUIRE(Lock{ 1 } != l2);
    REQUIRE(l1 < l2);
}

TEST_CASE("Basic operations on Position", "[position][ids]") {
    Position p1{ 1 };
    Position p2{ 2 };
    REQUIRE(to_index(p1) == 1);
    REQUIRE(to_index(p2) == 2);
    REQUIRE(p1 == Position{ 1 });
    REQUIRE(Position{ 1 } != p2);
    REQUIRE(p1 < p2);
}
