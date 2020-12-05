#ifndef VANTAGE_POINT_TREE_NODE_HPP
#define VANTAGE_POINT_TREE_NODE_HPP

#include <vector>

#include "base_node.hpp"

namespace eda {

namespace vantage_point_tree {

template <typename T>
class Node : public BaseNode<T, Node<T> > {
public:
	Node(int, double, std::vector<int>);
	Node(int);
};

} // namespace vantage_point_tree

} // namespace eda

#include "impl/node.ipp"

#endif // VANTAGE_POINT_TREE_NODE_HPP
