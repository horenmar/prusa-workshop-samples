#include "sort.hpp"

#include <catch2/catch_test_macros.hpp>
#include <catch2/generators/catch_generators.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>


#include <tuple>

TEST_CASE("Simple sorting tests", "[sort][algorithms]") {
    using Catch::Matchers::Equals;
    std::vector<int> input, expected;
    std::tie(input, expected) = GENERATE(table<std::vector<int>,
                                               std::vector<int>>({
                                                   {{}, {}},   // empty
                                                   {{1}, {1}}, // singular element
                                                   {{1, 1, 1}, {1, 1, 1}}, // all elements are the same
                                                   {{1, 2, 3, 4}, {1, 2, 3, 4}}, // ascending
                                                   {{4, 3, 2, 1}, {1, 2, 3, 4}}, // descending
                                                   {{7, 9, 1, 5}, {1, 5, 7, 9}}, // just some numbers 1
                                                   {{8, 7, 9, 1, 5, 3, 22}, {1, 3, 5, 7, 8, 9, 22}}, // just some numbers 2
                                               }));

    sabotaged_sort(input.begin(), input.end());
    REQUIRE(input == expected);
}
