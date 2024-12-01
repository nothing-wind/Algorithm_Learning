// CMakeProject1.cpp: 定义应用程序的入口点。
//

#include<iostream>
#include<queue>
#include "merge_k_sort_link_list.h"

using namespace std;

  struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    struct cmp {
        bool operator()(ListNode* a, ListNode* b)
        {
            return a->val > b->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        priority_queue<ListNode*, vector<ListNode*>, cmp> priorityQueue;
        for (auto elem : lists) {
            if (elem) priorityQueue.push(elem);
        }

        ListNode* tempList = new ListNode(-1);
        ListNode* p = tempList;
        while (!priorityQueue.empty()) {
            ListNode* top = priorityQueue.top();
            priorityQueue.pop();
            p->next = top;
            p = top;
            if (top->next) priorityQueue.push(top->next);
        }
        return tempList->next;
    }
};

int main()
{
	cout << "Hello CMake." << endl;
	return 0;
}
