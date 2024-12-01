// MergeKLists.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>
#include <vector>
#include <queue>

using std::vector;
using std::priority_queue;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr){}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

struct cmp
{
    bool operator() (ListNode* a, ListNode* b) {
        return a->val > b->val;
    }
}; 

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) {
            return nullptr;
        }

        ListNode* dummy = new ListNode(-1);
        ListNode* head = dummy;
        priority_queue<ListNode*, vector<ListNode*>, cmp> pq;
        for (ListNode * node : lists) {
            if(node) pq.push(node);
        }

        ListNode* node;

        while (!pq.empty()) {
            node = pq.top();
            head->next = node;
            pq.pop();

            if (node->next) {
                pq.push(node->next);
            }
            head = head->next;
        }
        return dummy->next;
    }
};

// TODO: 在此处引用程序需要的其他标头。
