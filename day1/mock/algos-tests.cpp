#include "algos.hpp"

#include <catch2/catch_test_macros.hpp>

#include <vector>

TEST_CASE("Find", "[algorithms][find]") {
    SECTION("Empty vector") {
        REQUIRE(find(std::vector<int>{}, 0) == 0);
    }
    SECTION("Non empty vector") {
        std::vector<int> elems{ 0, 2, 4 };
        REQUIRE(find(elems, 0) == 0);
        REQUIRE(find(elems, 2) == 1);
        REQUIRE(find(elems, 1234) == 3);
    }
    SECTION("Vector with duplicated elements") {
        std::vector<int> elems{ 0, 3, 0, 2, 3 };
        REQUIRE(find(elems, 0) == 0);
        REQUIRE(find(elems, 1) == 5);
        REQUIRE(find(elems, 2) == 3);
        REQUIRE(find(elems, 3) == 1);
    }
}

