#include "divisors.hpp"

#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>

TEST_CASE("get_divisors simple", "[divisors]") {
    using Catch::Matchers::UnorderedEquals;
    // edge case
    // * 0
    REQUIRE(get_divisors(0) == std::vector<int>{});
    REQUIRE(get_divisors_fast(0) == std::vector<int>{});
    // * 1
    REQUIRE(get_divisors(1) == std::vector<int>{1});
    REQUIRE(get_divisors_fast(1) == std::vector<int>{1});
    // * prvocisla (7)
    REQUIRE_THAT(get_divisors(7),
                 UnorderedEquals<int>({ 1, 7 }));

    //
    // "obycejne pripady"
    REQUIRE_THAT(get_divisors_fast(40),
                 UnorderedEquals<int>(get_divisors(40)));
}

TEST_CASE("Benchmarks", "[divisors][benchmark][.]") {
    BENCHMARK("old divisors") {
        return get_divisors(1'000'000);
    };

    BENCHMARK("fast divisors") {
        return get_divisors_fast(1'000'000);
    };
}
