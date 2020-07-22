#include "graph.hpp"

#include <algorithm>
#include <cassert>
#include <fstream>

bool simple_graph::edge_exists(size_t k1, size_t k2) {
    return std::find(m_node_edges[k1].begin(),
                     m_node_edges[k1].end(),
                     k2) != m_node_edges[k1].end();
}

bool simple_graph::contains(size_t node) const {
    return !!m_nodes.count(node);
}

void simple_graph::add_edge(size_t k1, size_t k2) {
    assert(contains(k1) && "k1 is not in the graph");
    assert(contains(k2) && "k2 is not in the graph");
    assert(!edge_exists(k1, k2) && "Edge between these two nodes already exists");
    m_node_edges[k1].push_back(k2);
}

std::vector<size_t> const& simple_graph::edges_from(size_t k) const {
    assert(m_nodes.count(k) && "Queried key not in graph");
    auto it = m_node_edges.find(k);
    assert(it != m_node_edges.end() && "Inconsistent state!");
    return it->second;
}

//! Adds key node to the graph
void simple_graph::add_node(size_t k) {
    assert(!m_nodes.count(k) && "Node already present in the graph");
    m_nodes.insert(k);
    // We also need to init the edges and value data structures
    m_node_edges[k] = {};
}


static const char* indent = "    ";

void write_as_dot(simple_graph const& graph, std::ostream& out) {
    out << "digraph G {\n";

    for (size_t from : graph.nodes()) {
        out << indent << from << ";\n";
        for (size_t to : graph.edges_from(from)) {
            out << indent << from << " -> " << to << ";\n";
        }
    }

    out << "}\n" << std::flush;
}
