// 30thNum.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>
#include <vector>

using std::vector;

class Solution {
private:

public:
	int Num(int n) {
		if (n == 1 || n==2) {
			return 1;
		}
		return Num(n - 1) + Num(n - 2);
	}
};

//class Solution2 {
//private:
//	bool Is2Pow(int n) {
//		if (n!=1&& n & 1 == 1) {
//			return false;
//		}
//		if (n == 1) {
//			return true;
//		}
//		return Is2Pow(n >> 1);
//	}
//};

//class PriorityQueue {
//	vector<vector<int>> queue;
//public:
//	PriorityQueue();
//	void push(int val, int priority) {
//		if (queue.size() == 0) {
//			queue.push_back(vector<int>{val, priority});
//		}
//		else {
//			if (queue[queue.size() - 1][1] < priority) {
//				queue.insert(queue.size() - 1, vector<int>{val, priority});
//				queue.inse
//			}
//		}
//
//	}
//	int pop();
//	bool empty();
//	int size();
//};

// TODO: 在此处引用程序需要的其他标头。
