#include "month.hpp"

#include <catch2/catch_test_macros.hpp>
#include <catch2/generators/catch_generators.hpp>

#include <sstream>

TEST_CASE("Serialization of month enum (smarter)", "") {
    month input;
    const char* expected;

    std::tie(input, expected) = GENERATE(table<month, const char*>({
        { month::January, "Jan"},
        { month::February, "Feb" },
        { month::March, "Mar"}
    }));

    std::stringstream sstr;
    sstr << input;
    REQUIRE(sstr.str() == expected);
}

