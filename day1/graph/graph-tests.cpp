#include "graph.hpp"

int main(int argc, char** argv) {
    simple_graph graph;
    graph.add_node(0);
    graph.add_node(1);
    graph.add_node(2);
    graph.add_edge(1, 2);
    write_as_dot(graph, argv[1]);
}
