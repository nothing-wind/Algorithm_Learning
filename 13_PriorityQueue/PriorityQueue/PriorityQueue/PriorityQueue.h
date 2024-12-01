// PriorityQueue.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>
#include <vector>
#include <map>

using std::vector;
using std::map;

class PriorityQueue {
private:
	vector<map<int, int>> PQ;

public:
	int Pop() {
	}
	void Push(int val, int priority) {

	}
	int Size() {
		return PQ.size();
	}
	int Empty() {
		return PQ.empty();
	}
};

// TODO: 在此处引用程序需要的其他标头。
