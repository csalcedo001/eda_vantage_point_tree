#ifndef VANTAGE_POINT_TREE_BASE_NODE_HPP
#define VANTAGE_POINT_TREE_BASE_NODE_HPP

namespace eda {

namespace vantage_point_tree {

template <typename T, class Node>
class BaseNode {
public:
	Node *in_;
	Node *out_;
	int index_;
	double radius_;
	std::vector<int> indices_;

	BaseNode(int, double, std::vector<int>);
	BaseNode(int);

	bool is_leaf();
};

} // namespace vantage_point_tree

} // namespace eda

#include "impl/base_node.ipp"

#endif // VANTAGE_POINT_TREE_BASE_NODE_HPP
