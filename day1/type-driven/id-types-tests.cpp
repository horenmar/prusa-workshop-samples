#include "id-types.hpp"

#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_template_test_macros.hpp>

TEMPLATE_TEST_CASE("Basic operations on ids", "",
                   Key, Lock, Position) {
    TestType k1{ 1 };
    TestType k2{ 2 };
    REQUIRE(to_index(k1) == 1);
    REQUIRE(to_index(k2) == 2);
    REQUIRE(k1 == TestType{ 1 });
    REQUIRE(TestType{ 1 } != k2);
    REQUIRE(k1 < k2);
}
