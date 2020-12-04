#ifndef VANTAGE_POINT_TREE_BASE_NODE_IPP
#define VANTAGE_POINT_TREE_BASE_NODE_IPP

namespace eda {

namespace vantage_point_tree {

template <typename T, class Node>
BaseNode<T, Node>::BaseNode(std::vector<double> &point, double radius, std::vector<int> &indices) :
	point_(point),
	radius_(radius),
	indices_(indices)
{ }

} // namespace vantage_point_tree

} // namespace eda

#endif // VANTAGE_POINT_TREE_BASE_NODE_IPP
