// MinCoverSubstring.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>
#include <string>
#include <map>

using std::string;
using std::map;

class Solution {
private:
    int start = 0;
    map<char, int> need, window;
    int resLen = INT_MAX;
    int valid = 0;
public:
    string minWindow(string s, string t) {
        int left = 0, right = 0, strLen = s.size();
        for (auto c : t) {
            need[c] ++;
        }
        int needNum = need.size();
        while (right < strLen) {
            char c = s[right];
            right++;

            if (need.count(c)) {
                window[c]++;
                if (window[c] == need[c]) {
                    valid++;
                }
            }

            while (valid == need.size()) {
                if (right - left < resLen) {
                    resLen = right - left;
                    start = left;
                }

                char d = s[left];
                left++;
                if (need.count(d)) {
                    if (window[d] == need[d]) {
                        valid--;
                    }
                    window[d]--;
                }
            }
        }
        return resLen == INT_MAX ? "" : s.substr(start, resLen);
    }
};

// TODO: 在此处引用程序需要的其他标头。
