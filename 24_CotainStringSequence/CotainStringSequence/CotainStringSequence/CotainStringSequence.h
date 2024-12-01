// CotainStringSequence.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>
#include <map>
#include <string>

using std::map;
using std::string;


class Solution {
private:
    int valid = 0;
public:
    bool checkInclusion(string s1, string s2) {
        map<char, int> need, window;

        for (auto c : s1) need[c]++;

        int left = 0, right = 0;
        while (right < s2.size()) {
            char c = s2[right];
            right++;

            if (need.count(c)) {
                window[c]++;
                if (window[c] == need[c]) {
                    valid++;
                }
            }
            while (valid == need.size()) {
                if (right - left == s1.size()) {
                    return true;
                }

                char d = s2[left];
                left++;

                if (need.count(d)) {
                    if (window[d] == need[d]) valid--;
                    window[d]--;
                }
            }
        }
        return false;
    }
};

// TODO: 在此处引用程序需要的其他标头。
