#include "graph.hpp"

#include <fstream>
#include <sstream>

#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>

TEST_CASE("write_as_dot") {
    using namespace Catch::Matchers;
    using namespace std::string_literals;

    simple_graph graph;
    graph.add_node(0);
    graph.add_node(1);
    graph.add_node(2);
    graph.add_edge(1, 2);

    std::stringstream sstr;
    write_as_dot(graph, sstr);
    std::string serialized = sstr.str();
    /*
      digraph G {
          0;
          1 -> 2;
      }

     */
    REQUIRE_THAT(serialized,
                 Contains("1 -> 2"s)
                 && Contains("0;"s)
                 && StartsWith("digraph")
                 && !Contains("3"s)
                 && Matches("digraph .+ {"));

}

//int main(int argc, char** argv) {
//    simple_graph graph;
//    graph.add_node(0);
//    graph.add_node(1);
//    graph.add_node(2);
//    graph.add_edge(1, 2);
//
//    std::ofstream out(argv[1]);
//    write_as_dot(graph, out);
//}
