#include <iostream>

#include "vantage_point_tree.hpp"

using namespace std;

int main() {
	int n = 5;

	std::vector<std::vector<double> > points(n, {0, 0});
	std::vector<string> data(n);

	for (int i = 0; i < n; i++) {
		data[i] = i + 'A';

		points[i][0] = (23 * i) % 13;
		points[i][1] = (11 * i) % 7;
	}

	eda::vantage_point_tree::VantagePointTree<string> vt(2, points, data);

	vt.print();
}
