#pragma once

#include <unordered_map>
#include <unordered_set>
#include <string>
#include <vector>


/**
 * Simple directed graph class.
 *
 * There is no way to add metadata (like costs) to edges or nodes. The
 * only provided functionality is to add a node or edge between two
 * (known) nodes.
 */
class simple_graph {
    // Nodes that were added to the graph
    std::unordered_set<size_t> m_nodes;
    // Edges from specific nodes
    std::unordered_map<size_t, std::vector<size_t>> m_node_edges;

    // internal assert helper
    [[maybe_unused]] bool edge_exists(size_t k1, size_t k2);
public:
    /**
     * Adds edge from k1 to k2 to the graph
     *
     * \pre `contains(k1)`
     * \pre `contains(k2)`
     */
    void add_edge(size_t k1, size_t k2);

    //! Does the graph contain specific node?
    bool contains(size_t node) const;

    //! Returns edges that lead from `k`
    std::vector<size_t> const& edges_from(size_t k) const;

    //! Adds node to the graph
    void add_node(size_t k);

    //! Returns all nodes present in the graph
    std::unordered_set<size_t> const& nodes() const {
        return m_nodes;
    }
};

//! Writes out the provided graph in dot format to the given path
void write_as_dot(simple_graph const& graph, std::string const& path);
