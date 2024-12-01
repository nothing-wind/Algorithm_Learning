// DetectCycleNode.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>

#include <iostream>


struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next->next;
            if (slow == fast) {
                break;
            }
        }

        if (slow != fast || fast->next == nullptr || fast == nullptr || fast->next->next == nullptr) {
            return nullptr;
        }

        slow = head;

        while (slow != fast) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

// TODO: 在此处引用程序需要的其他标头。
