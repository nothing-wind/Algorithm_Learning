// 删除数组的重复项.cpp: 定义应用程序的入口点。
//
#include<vector>
#include "删除数组的重复项.h"

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        uint32_t slow = 0;
        for (uint32_t i = 0; i < nums.size() - 1; i++) {
            if (nums[i] != nums[i + 1]) nums[++slow] = nums[i + 1];
        }
        return ++slow;
    }
};

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
    
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* slow = head, * fast = head;
        while (fast&&fast->next) {
            fast = fast->next;
                if (fast->val != slow->val) {
                    slow->next = fast;
                    slow = fast;
            }
        }
        return head;
    }
};

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow = 0;
        for (uint32_t fast = 0; fast < nums.size(); fast++) {
            if (nums[fast] != val) nums[slow++] = nums[fast];
        }
        return ++slow;
    }
};

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        uint32_t slow = 0;
        for (uint32_t fast = 0; fast < nums.size(); fast++) {
            if (nums[fast]) {
                int temp = nums[slow];
                nums[slow] = nums[fast];
                nums[fast] = 0;
            }
        }
    }
};


// 有序数组求两数之和
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                return { ++left, ++right };
            }
            else if (sum > target) {
                right--;
            }
            else {
                left++;
            }
        }
        return { -1, -1 };
    }
};

// 反转字符串
class Solution {
public:
    void reverseString(vector<char>& s) {

        int left = 0, right = s.size() - 1;
        while (left < right) {
            int temp = s[right];
            s[right--] = s[left];
            s[left++] = temp;
        }
        return;
    }
};

// 最大回文子串
string FindSubStr(string s, int left, int right, int n) {
    while (left >= 0 && right < n && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(++left, right - left);
}

class Solution {
public:
    string longestPalindrome(string s) {
        int lengh = s.size();
        string result;
        string ret1, ret2;
        for (int i = 0; i < s.size(); i++) {
            ret1 = FindSubStr(s, i, i, lengh);
            ret2 = FindSubStr(s, i, i + 1, lengh);
            result = ret1.length() > result.length() ? ret1 : result;
            result = ret2.length() > result.length() ? ret2 : result;
        }
        return result;
    }
};