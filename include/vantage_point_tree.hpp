#ifndef VANTAGE_POINT_TREE_VANTAGE_POINT_TREE_HPP
#define VANTAGE_POINT_TREE_VANTAGE_POINT_TREE_HPP

#include <vector>

#include "base_vantage_point_tree.hpp"
#include "node.hpp"

namespace eda {

namespace vantage_point_tree {

template <typename T>
class VantagePointTree : public BaseVantagePointTree<T, Node<T> > {
public:
	VantagePointTree(int, std::vector<std::vector<double> > &, std::vector<T> &);
};

} // namespace vantage_point_tree

} // namespace eda

#include "impl/vantage_point_tree.ipp"

#endif // VANTAGE_POINT_TREE_VANTAGE_POINT_TREE_HPP
