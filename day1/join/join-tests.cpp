#include "join.hpp"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("joining strings", "[string-utils][join]") {
    using namespace std::string_literals;
    // okraje:
    //   * 1 prvek na vstupu -- ok
    //   * 2 prvky (na konci neni joiner) -- ok
    //   * prazdny vektor -- chyba
    //   * prazdny retezce ve vektoru - ok
    //
    // nejake bezne vstupy
    //

    REQUIRE(join({"abc"s}, ", "s) == "abc"s);
    REQUIRE(join({ "abc"s, "def"s }, ", "s) == "abc, def"s);
    //REQUIRE(join({}, ", "s) == ""s);

    REQUIRE(join({ ""s, "abc"s, ""s }, ", "s) == ", abc, "s);


    std::vector<std::string> input;
    input.reserve(20);
    input.push_back("abc");
    //input.push_back("def");
    //input.push_back("ghi");

    REQUIRE(join(input, ", ") == "abc"s);

    // prazdny joiner
    REQUIRE(join({ "abc"s, "def"s }, ""s) == "abcdef");

    //
    // What inputs to test here?
}
