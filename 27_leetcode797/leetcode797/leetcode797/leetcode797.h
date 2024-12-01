// leetcode797.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>
#include <vector>
using namespace std::vector;

class Solution {
private:
    vector<vector> path;
    void trasver(vector<vector<int>>& graph, int n) {
        path.push_back(n);
    };
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        trasver(graph, 0);
    }
};

// TODO: 在此处引用程序需要的其他标头。
