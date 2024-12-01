// MaxBackSumm.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
private:
    int maxSum = INT_MIN;
public:
    int maxPathSum(TreeNode* root) {
        (void)Traverse(root);
        return maxSum;
    }
    int Traverse(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int left = max(0, Traverse(root->left));
        int right = max(0, Traverse(root->right));
        maxSum = max(maxSum, left + right + root->val);
        return max(left, right) + root->val;
    }
};

// TODO: 在此处引用程序需要的其他标头。
