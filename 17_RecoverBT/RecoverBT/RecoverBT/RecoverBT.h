// RecoverBT.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>
#include<vector>

using std::vector;


 //Definition for a binary tree node.
  struct TreeNode {
    int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
private:
    TreeNode* head;
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        (void)FrontSortTraverse(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
        return head;
    }
    TreeNode* FrontSortTraverse(vector<int>& preOrder, int preStart, int preEnd, vector<int> inOrder, int inStart, int inEnd) {
        if (preStart > preEnd) {
            return nullptr;
        }
        int rootValue = preOrder[preStart];
        int index = 0;
        for (int i = inStart; i <= inEnd; i++) {
            if (inOrder[i] == rootValue) {
                index = i;
                break;
            }
        }

        TreeNode* root = new TreeNode(rootValue);
        if (preStart == 0) {
            head = root;
        }
        int leftSize = index - inStart;
        root->left = FrontSortTraverse(preOrder, preStart + 1, preStart + leftSize, inOrder, inStart, inStart + leftSize -1);
        root->right = FrontSortTraverse(preOrder, preStart + leftSize + 1, preEnd, inOrder, inStart + leftSize + 1, inEnd);
        return root;
    }
};

// TODO: 在此处引用程序需要的其他标头。
