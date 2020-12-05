#ifndef VANTAGE_POINT_TREE_BASE_NODE_IPP
#define VANTAGE_POINT_TREE_BASE_NODE_IPP

namespace eda {

namespace vantage_point_tree {

template <typename T, class Node>
BaseNode<T, Node>::BaseNode(int index, double radius, std::vector<int> indices) :
	index_(index),
	radius_(radius),
	indices_(indices)
{ }

template <typename T, class Node>
BaseNode<T, Node>::BaseNode(int index) :
	index_(index)
{ }

} // namespace vantage_point_tree

} // namespace eda

#endif // VANTAGE_POINT_TREE_BASE_NODE_IPP
