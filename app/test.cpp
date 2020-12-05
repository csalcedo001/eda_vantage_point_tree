#include <iostream>

#include "vantage_point_tree.hpp"

using namespace std;

int main() {
	std::vector<std::vector<double> > points;
	std::vector<int> data;

	eda::vantage_point_tree::VantagePointTree<int> vt(points, data);

	vt.print();
}
