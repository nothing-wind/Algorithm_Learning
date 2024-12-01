// 返回环形链表的起点.cpp: 定义应用程序的入口点。
//

#include "返回环形链表的起点.h"

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = head, * fast = head;
        while (slow&&fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) break;
        }
        if (!slow&&!fast->next) return nullptr;
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};


class Solution3 {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = head, * fast = head;
        if (head == nullptr) return nullptr;
        while (fast && fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next->next;
            if (slow == fast) break;
        }
        if (!fast || !fast->next || !fast->next->next) return nullptr;
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};