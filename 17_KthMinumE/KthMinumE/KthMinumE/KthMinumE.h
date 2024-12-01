// KthMinumE.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>


  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
    int rank = 0;
    int res;
public:
    int kthSmallest(TreeNode* root, int k) {
        InOrderTraverse(root, k);
        return res;
    }
    void InOrderTraverse(TreeNode* root, int k) {
        if (root == nullptr) {
            return;
        }
       
        InOrderTraverse(root->left, k);

        rank++;
        if (rank == k) {
            res = root->val;
            return;
        }

        InOrderTraverse(root->right, k);
    }
};

// TODO: 在此处引用程序需要的其他标头。
