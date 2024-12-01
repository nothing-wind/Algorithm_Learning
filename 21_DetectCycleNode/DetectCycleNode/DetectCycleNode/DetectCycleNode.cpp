// DetectCycleNode.cpp: 定义应用程序的入口点。
//

#include "DetectCycleNode.h"

using namespace std;

int main()
{
	ListNode* myList = new ListNode(1);
	myList->next = new ListNode(2);
	myList->next->next = myList;

	Solution solution;

	ListNode* ret = solution.detectCycle(myList);

	cout << "ret value: " << ret->val << endl;

	return 0;
}
