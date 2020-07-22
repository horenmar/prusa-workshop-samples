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

struct MockContainer {
    std::vector<int> m_data;
    size_t m_limit;

    MockContainer(std::vector<int> data, size_t limit) :
        m_data(std::move(data)),
        m_limit(limit) {}

    size_t size() const {
        return m_data.size();
    }

    int const& operator[](size_t idx) const {
        if (idx >= m_data.size()) {
            throw "out of bounds";
        }
        REQUIRE(idx < m_limit);
        return m_data[idx];
    }
};

TEST_CASE("Mocked find") {
    std::vector<int> elems{ 0, 2, 4 };
    REQUIRE(find(MockContainer(elems, 1), 0) == 0);

    //std::vector<int> vec{ 0, 2, 3, 4, 5, 6 };
    //vec.size() == 6;
    //vec.capacity() == X;
    //vec.clear();
    //vec.size() == 0;
    //vec.capacity() == X || vec.capacity() == 0;
    //vec.shrink_to_fit();

}

