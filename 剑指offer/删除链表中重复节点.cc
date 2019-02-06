// 在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针。 
// 例如，链表1->2->3->3->4->4->5 处理后为 1->2->5
#include <iostream>

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};

class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        if(pHead == NULL) {
            return NULL;
        }
        ListNode* head = new ListNode(0);
        ListNode* curr = pHead;
        head->next = curr;
        ListNode* pre = head;
        while(curr!=NULL) {
            if(curr->next == NULL) {
                break;
            }
            if(curr->val == curr->next->val) {
                int target = curr->val;
                ListNode* tmp = curr;
                ListNode* tmp_next = curr->next;
                while(tmp!=NULL) {
                    tmp_next = tmp->next;
                    if(tmp->val == target) {
                        delete tmp;
                    } else {
                        break;
                    }
                    tmp = tmp_next;
                }
                curr = tmp;
                pre->next = tmp;
            } else {
                pre = curr;
                curr = curr->next;
            }
        }
        ListNode* new_head = head->next;
        delete head;
        head = NULL;
        return new_head;
    }
};
