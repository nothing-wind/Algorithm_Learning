// DetectIntersectNode.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>


  struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* p1 = headA;
        ListNode* p2 = headB;
        if (p1 == nullptr || p2 == nullptr) {
            return nullptr;
        }
        while (p1 != p2)
        {
            if (p1 == nullptr) {
                p1 = headB;
            }
            else {
                p1 = p1->next;
            }

            if (p2 == nullptr) {
                p2 = headA;
            }
            else {
                p2 = p2->next;
            }
        }

        return p1;
    }
};

// TODO: 在此处引用程序需要的其他标头。
