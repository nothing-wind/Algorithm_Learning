// 返回两条链表的交点.cpp: 定义应用程序的入口点。
//

#include "返回两条链表的交点.h"

using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* p1 = headA, * p2 = headB;
        while (p1 != p2) {
            if (!p1) { p1 = headB; }
            else { p1 = p1->next; }
            if (!p2) { p2 = headA; }
            else {
                p2 = p2->next;
            }

        }
        return p1;
    }
};
