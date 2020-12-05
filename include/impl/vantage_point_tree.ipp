#ifndef VANTAGE_POINT_TREE_VANTAGE_POINT_TREE_IPP
#define VANTAGE_POINT_TREE_VANTAGE_POINT_TREE_IPP

#include "vantage_point_tree.hpp"

#include <vector>

#include "base_vantage_point_tree.hpp"
#include "node.hpp"

namespace eda {

namespace vantage_point_tree {

template <typename T>
VantagePointTree<T>::VantagePointTree(int dimensions, std::vector<std::vector<double> > &points, std::vector<T> &data) :
	BaseVantagePointTree<T, Node<T> >(dimensions, points, data)
{ }

} // namespace vantage_point_tree

} // namespace eda

#endif // VANTAGE_POINT_TREE_VANTAGE_POINT_TREE_IPP
