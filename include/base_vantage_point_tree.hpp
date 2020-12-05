#ifndef VANTAGE_POINT_TREE_BASE_VANTAGE_POINT_TREE_HPP
#define VANTAGE_POINT_TREE_BASE_VANTAGE_POINT_TREE_HPP

#include <vector>

namespace eda {

namespace vantage_point_tree {

template <typename T, class Node>
class BaseVantagePointTree {
private:
	Node *head_;
	std::vector<std::vector<double> > points_;
	std::vector<T> data_;

public:
	BaseVantagePointTree(std::vector<std::vector<double> > &, std::vector<T> &);
	~BaseVantagePointTree();

	void print();

private:
	void build(Node *&, std::vector<int> &);
	void kill(Node *);
	void print(Node *, int);

public:
	virtual double distance(std::vector<double>, std::vector<double>);
};

} // namespace vantage_point_tree

} // namespace eda

#include "impl/base_vantage_point_tree.ipp"

#endif // VANTAGE_POINT_TREE_BASE_VANTAGE_POINT_TREE_HPP
