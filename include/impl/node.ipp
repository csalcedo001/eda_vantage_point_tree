#ifndef VANTAGE_POINT_TREE_NODE_IPP
#define VANTAGE_POINT_TREE_NODE_IPP

#include <vector>

#include "base_node.hpp"

namespace eda {

namespace vantage_point_tree {

template <typename T>
Node<T>::Node(std::vector<double> &point, double distance, std::vector<int> &indices) :
	BaseNode<T, Node<T> >(point, distance, indices)
{ }

} // namespace vantage_point_tree

} // namespace eda

#endif // VANTAGE_POINT_TREE_NODE_IPP
