#include "split.hpp"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("split splits", "[str-utils][split]") {
    using namespace std::string_literals;
    using strvec = std::vector<std::string>;

    // * edge cases:

    //   * prazdny retezec
    REQUIRE(split(""s, 'c') == strvec{""s});

    //   * delici je samotnej
    REQUIRE(split("c"s, 'c') == strvec{""s, ""s});

    //   * na konci/na zacatku
    REQUIRE(split(".abc"s, '.') == strvec{""s, "abc"s});
    REQUIRE(split("abc."s, '.') == strvec{ "abc"s, ""s });


    //   * delic je dvakrat za sebou
    REQUIRE(split("abc..def"s, '.') == strvec{ "abc"s, ""s, "def"s });

    //   * retezec neobsahuje split_on
    REQUIRE(split("abc"s, 'q') == strvec{ "abc"s });

    //   * nekolik opakovani delice a nic jineho
    REQUIRE(split("..."s, '.') == strvec{ ""s, ""s, ""s, ""s });

    //   * split_on == '\0'
    REQUIRE(split("abc"s, '\0') == strvec{ "abc"s });
    REQUIRE(split("abc\0def"s, '\0') == strvec{ "abc"s, "def"s });


    REQUIRE(split("abc.def", '.') == strvec{ "abc"s, "def"s });

}
