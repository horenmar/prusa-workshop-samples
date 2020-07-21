#include "month.hpp"

#include <catch2/catch_test_macros.hpp>

#include <sstream>

TEST_CASE("Serialization of month enum", "[serialization][month]") {
    std::stringstream sstr;
    SECTION("January") {
        sstr << month::January;
        REQUIRE(sstr.str() == "Jan");
    }
    SECTION("February") {
        sstr << month::February;
        REQUIRE(sstr.str() == "Feb");
    }
    SECTION("March") {
        sstr << month::March;
        REQUIRE(sstr.str() == "Mar");
    }
    SECTION("April") {
        sstr << month::April;
        REQUIRE(sstr.str() == "Apr");
    }
    SECTION("May") {
        sstr << month::May;
        REQUIRE(sstr.str() == "May");
    }
    SECTION("June") {
        sstr << month::June;
        REQUIRE(sstr.str() == "Jun");
    }
    SECTION("July") {
        sstr << month::July;
        REQUIRE(sstr.str() == "Jul");
    }
    SECTION("August") {
        sstr << month::August;
        REQUIRE(sstr.str() == "Aug");
    }
    SECTION("September") {
        sstr << month::September;
        REQUIRE(sstr.str() == "Sep");
    }
    SECTION("October") {
        sstr << month::October;
        REQUIRE(sstr.str() == "Oct");
    }
    SECTION("November") {
        sstr << month::November;
        REQUIRE(sstr.str() == "Nov");
    }
    SECTION("December") {
        sstr << month::December;
        REQUIRE(sstr.str() == "Dec");
    }
}
