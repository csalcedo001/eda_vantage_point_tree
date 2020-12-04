#ifndef VANTAGE_POINT_TREE_BASE_NODE_HPP
#define VANTAGE_POINT_TREE_BASE_NODE_HPP

namespace eda {

namespace vantage_point_tree {

template <typename T, class Node>
class BaseNode {
public:
	Node *in_;
	Node *out_;
	std::vector<double> point_;
	double radius_;
	std::vector<int> indices_;

	BaseNode(std::vector<double> &, double, std::vector<int> &);
};

} // namespace vantage_point_tree

} // namespace eda

#endif // VANTAGE_POINT_TREE_BASE_NODE_HPP
