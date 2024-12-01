// kuohaozuhe.cpp: 定义应用程序的入口点。
//

#include "kuohaozuhe.h"

#include <iostream>
using namespace std;

class ListNode {
public:
    char kuohao;
    ListNode* left;
    ListNode* right;
    ListNode(char a) :kuohao(a), left(nullptr), right(nullptr) {};
};

class Solution {
private:
    ListNode* bt;
public:
    ListNode* BilidBT(int n) {
        if (n == 0) return nullptr;
        ListNode* p = new ListNode('(');
    }
};

int main() {
    // char str[3];
    // std::cin>>str;
    std::cout << "hello world" << std::endl;
    return 0;
}