//输入一个链表，按链表值从尾到头的顺序返回一个ArrayList。
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct ListNode {
       int val;
       struct ListNode *next;
       ListNode(int x) :
             val(x), next(NULL) {
       }
 };

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> result;
        if(head == NULL) {
            return result;
        }
        ListNode* curr = head;
        while(curr!=NULL) {
            s_.push(curr->val);
            curr = curr->next;
        }
        while(!s_.empty()) {
            result.push_back(s_.top());
            s_.pop();
        }
        return result;
    }
    
    stack<int> s_;
};
