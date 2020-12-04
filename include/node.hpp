#ifndef VANTAGE_POINT_TREE_NODE_HPP
#define VANTAGE_POINT_TREE_NODE_HPP

#include <vector>

#include "base_node.hpp"

namespace eda {

namespace vantage_point_tree {

template <typename T>
class Node : public BaseNode<T, Node<T> > {
public:
	Node(std::vector<double> &, double, std::vector<int> &);
};

} // namespace vantage_point_tree

} // namespace eda

#endif // VANTAGE_POINT_TREE_NODE_HPP
