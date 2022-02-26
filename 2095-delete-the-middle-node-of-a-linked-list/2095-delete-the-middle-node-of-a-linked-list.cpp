/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
     ListNode* fast=head,*slow=head,*prev=NULL;
        while(fast&&fast->next)
        {   prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }  
        if(!prev)
            return NULL;
        prev->next=slow->next;
        ListNode* tmp=slow;
        delete(tmp);
        return head;
    }
};