// CMakeProject1.cpp: 定义应用程序的入口点。
//

#include "CMakeProject1.h"
#include<list>
#include<vector>
#include<stack>

using namespace std;
struct ListNode{
int val;
ListNode* next;
ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode* next) : val(x), next(next) {}
 };

class Solution {
public:

	ListNode* ReverseLists(ListNode* lists) {
		if (!lists||lists->next) {
			return lists;
		}
		ListNode* head = new ListNode(-1);
		head->next = lists;
		ListNode* p1 = head;
		ListNode* p2 = p1->next;
		ListNode* p3 = p2->next;
		p1->next = nullptr;
		while (p2) {
			p2->next = p1;
			ListNode* temp = p2;
			p2 = p3;
			p1 = temp;
			p3 = p3->next;
		}
		return p2;
	}
};

int main() {
	ListNode* lists = new ListNode(-1);
	for (int i = 0; i < 10; i++) {
		lists->val = i;
		ListNode* temp = new ListNode();
		lists->next = temp;
		lists = lists->next;
	}
	class Solution solution;
	ListNode* lists2 = solution.ReverseLists(lists);
	cout << "list:";
	while (lists) {
		cout << lists->val;
		lists = lists->next;
	}
	cout << endl;
	cout << "list2:";
	while (lists2) {
		cout << lists2->val;
		lists2 = lists2->next;
	}
	cout << endl;

}