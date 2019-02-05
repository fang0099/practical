//输入一个链表，输出该链表中倒数第k个结点。
#include<iostream>

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};

class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        ListNode* second = pListHead;
        unsigned int counter = k;
        while(counter>=1 && second!=NULL) {
            counter--;
            second = second->next;
        }
        if(counter > 0) {
            return NULL;
        }
        ListNode* first = pListHead;
        if(first == NULL) {
            return NULL;
        }
        while(second!=NULL) {
            first = first->next;
            second = second->next;
        }
        return first;
    }
};
