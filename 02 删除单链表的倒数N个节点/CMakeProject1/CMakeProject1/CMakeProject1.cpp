// CMakeProject1.cpp: 定义应用程序的入口点。
//

#include "CMakeProject1.h"

using namespace std;

struct ListNode {
  int val;
   ListNode *next;
   ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

ListNode* FindNthFromEnd(ListNode* head, uint32_t n)
{
	ListNode* p1 = head, * p2 = head;
	for (uint32_t i = 0; i < n; i++)
	{
		if (p1->next)
		{
			p1 = p1->next;
		}
		else
		{
			return head;
		}
	}
	while (p1 != nullptr) {
		p2 = p2->next;
		p1 = p1->next;
	}
}
 
class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode* dummy = new ListNode(-1);
		dummy->next = head;

		ListNode* kMinusOne = FindNthFromEnd(dummy, n + 1);
		if (dummy->next == kMinusOne)return dummy->next;
		kMinusOne->next = kMinusOne->next->next;

		return dummy->next;
	}
};

int main()
{
	cout << "Hello CMake." << endl;
	return 0;
}
