// CMakeProject1.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include<vector>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<vector<int>> result;
	void BackTrack(vector<int> track, vector<bool> usedNums, const vector<int>& nums);
	vector<vector<int>> permute(vector<int>& nums);
};

// TODO: 在此处引用程序需要的其他标头。
