// NumsSubsetProblem_1.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>
#include<vector>

using std::vector;
using std::cout;
using std::endl;

class Solution {
private:
    vector<vector<int>> result;
    vector<int> track;

    void BackTrack(vector<int>& nums, int level) {
        result.push_back(track);
        static int size = nums.size();

        for (int i = level; i < size; i++) {
            track.push_back(nums[i]);
            BackTrack(nums, i + 1);
            track.pop_back();
        }
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        BackTrack(nums, 0);
        return result;
    }
};

// TODO: 在此处引用程序需要的其他标头。
