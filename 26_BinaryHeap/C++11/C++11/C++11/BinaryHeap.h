#pragma once

#include <iostream>
#include <functional>
#include <vector>
#include <stdexcept>

using namespace std;

template <typename T>
class CompleteBinaryHeap {
private:
	vector<T> heap;

	int size;

	std::function<bool(const& T, const& T)> comparator;

	int Parante(int child) {
		return (child - 1) / 2;
	}

	int LeftChild(int parent) {
		return parent * 2 + 1;
	}

	int RightChild(int parent) {
		return parent * 2 + 2;
	}

	void Swap(int node1, int node2) {
		T temp = heap[node1];
		heap[node1] = heap[node2];
		heap[node2] = temp;
	}

	void Swim(int node) {
		while (node > 0 && comparator(heap[node], heap[Parent(node)])) {
			Swap(node, node);
			node = Parent(node);
		}
	}

	void Sink(int node) {
		int leftChild = LeftChild(node);
		int rightChild = RightChild(node);
		while (leftChild < size || rightChild < size) {
			int min = node;
		}


	}

public:

};
