#ifndef VANTAGE_POINT_TREE_BASE_VANTAGE_POINT_TREE_IPP
#define VANTAGE_POINT_TREE_BASE_VANTAGE_POINT_TREE_IPP

#include <ctime>
#include <random>
#include <vector>
#include <cmath>

#include "base_vantage_point_tree.hpp"

namespace eda {

namespace vantage_point_tree {

template <typename T, class Node>
BaseVantagePointTree<T, Node>::BaseVantagePointTree(std::vector<std::vector<double> > &points, std::vector<T> &data) :
	head_(nullptr),
	points_(points),
	data_(data)
{
	srand(time(NULL));

	std::vector<int> indices(points.size());

	for (int i = 0; i < points.size(); i++) {
		indices[i] = i;
	}

	this->build(this->head_, indices);
}

template <typename T, class Node>
BaseVantagePointTree<T, Node>::~BaseVantagePointTree() {
	this->kill(this->head_);
}

template <typename T, class Node>
void BaseVantagePointTree<T, Node>::print() {
	this->print(this->head_, 0);
}

template <typename T, class Node>
void BaseVantagePointTree<T, Node>::build(Node *&node, std::vector<int> &indices) {
	if (indices.size() == 0) {
		node = nullptr;

		return;
	}
	if (indices.size() == 1) {
		node = new Node(indices.front());

		return;
	}

	int index = indices[rand() % indices.size()];

	std::vector<double> distances(indices.size());
	double total = 0;
	double d;

	for (int i = 0; i < indices.size(); i++) {
		d = this->distance(this->points_[indices[i]], this->points_[index]);

		distances[i] = d;
		total += d;
	}

	double average_distance = total / indices.size();

	std::vector<int> in, out;

	for (int i = 0; i < indices.size(); i++) {
		if (distances[i] <= average_distance) {
			in.push_back(indices[i]);
		}
		else {
			out.push_back(indices[i]);
		}
	}
	
	Node *in_node, *out_node;

	this->build(in_node, in);
	this->build(out_node, out);

	node = new Node(index, average_distance, indices);

	node->in_ = in_node;
	node->out_ = out_node;
}

template <typename T, class Node>
void BaseVantagePointTree<T, Node>::kill(Node *node) {
	if (node == nullptr) return;

	// TODO: Implement kill
}

template <typename T, class Node>
void BaseVantagePointTree<T, Node>::print(Node *node, int level) {
	if (node == nullptr) return;
	
	this->print(node->in_, level + 1);

	for (int l = 0; l < level; l++) {
		std::cout << "    ";
	}
	std::cout << this->data_[node->index_] << std::endl;

	this->print(node->out_, level + 1);
}

template <typename T, class Node>
double BaseVantagePointTree<T, Node>::distance(std::vector<double> a, std::vector<double> b) {
	double total = 0;

	for (int i = 0; i < a.size(); i++) {
		total += (a[i] - b[i]) * (a[i] - b[i]);
	}

	return sqrt(total);
}

} // namespace vantage_point_tree

} // namespace eda

#endif // VANTAGE_POINT_TREE_BASE_VANTAGE_POINT_TREE_IPP
