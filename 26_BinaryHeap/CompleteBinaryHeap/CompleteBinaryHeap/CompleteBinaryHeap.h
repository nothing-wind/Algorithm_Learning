// CompleteBinaryHeap.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

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

	std::function<bool(const T &, const T &)> comparator;

	int Parent(int child) {
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
		bool ret = true;
		while (node > 0 && comparator(heap[node], heap[Parent(node)])) {
			Swap(node, Parent(node));
			node = Parent(node);
			ret = comparator(heap[node], heap[Parent(node)]);
		}
	}

	void Sink(int node) {
		int leftChild = LeftChild(node);
		int rightChild = RightChild(node);
		int min = 0;
		while (leftChild < size || rightChild < size) {
			min = node;
			if (leftChild < size && comparator(heap[leftChild], heap[node])) {
				min = leftChild;
				Swap(node, leftChild);
			}
			if (rightChild < size && comparator(heap[rightChild], heap[node])) {
				min = rightChild;
				Swap(node, rightChild);
			}
			if (min == node) {
				break;
			}
			node = min;
			leftChild = LeftChild(node);
			rightChild = RightChild(node);
		}
	}

	void Resize(int capacity) {
		if (capacity > size) {
			heap.resize(capacity);
		}
	}

public:
	CompleteBinaryHeap(int capacity, std::function<bool(const T&, const T&)> func) : heap(capacity), size(0), comparator(std::move(func))
	{
	
	}

	int GetSize(void) {
		return size;
	}

	bool IsEmpty(void) {
		return size == 0;
	}

	bool Peek(T *pop) {
		if (size != 0) {
			*pop = heap[size - 1];
			return true;
		}
		return false;
	}

	void Push(const T &value) {
		if (size >= heap.size()) {
			Resize(2 * heap.size());
		}
		heap[size] = value;
		Swim(size);
		size++;
	}

	T Pop(void) {
		T temp = heap[0];
		heap[0] = heap[size - 1];
		size--;
		Sink(0);
		return temp;
	}
};

// TODO: 在此处引用程序需要的其他标头。
