// BinaryHeap.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>
#include <vector>

using namespace std;

class BinaryHeap {
public:
	vector<int> heap;
	int size;

	BinaryHeap(int capacity) {
		heap.resize(capacity);
		size = 0;
	}

	static int Parent(int child) {
		return (child - 1) / 2;
	}

	static int LeftChild(int parent) {
		return parent * 2 + 1;
	}

	static int RightChid(int parent) {
		return parent * 2 + 2;
	}

	void SwapNode(int node1, int node2) {
		int temp = heap[node2];
		heap[node2] = heap[node1];
		heap[node1] = temp;
	}

	void Swim(int node) {
		while (node != 0 && heap[Parent(node)] > heap[node]) {
			SwapNode(node, Parent(node));
			node = Parent(node);
		}
	}

	void Sink(int node) {
		while (LeftChild(node) < size || RightChid(node) < size) {
			int min = node;
			if (LeftChild(node) < size && heap[node] > heap[LeftChild(node)]) {
				min = LeftChild(node);
			}
			else if (RightChid(node) < size && heap[node] > heap[RightChid(node)]) {
				min = RightChid(node);
			}

			if (min == node) break;

			SwapNode(node, min);
			node = min;
		}
	}

	void Push(int val) {
		heap[size] = val;
		Swim(size);
		size++;
	}

	int Peek() {
		return heap[size + 1];

	}

	int Pop() {
		int temp = heap[0];
		heap[0] = heap[size - 1];
		size--;
		Sink(0);
		return temp;
	}
};

// TODO: 在此处引用程序需要的其他标头。
