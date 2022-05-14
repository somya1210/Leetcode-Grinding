/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
      if(!head)
          return nullptr;
        ListNode* fast=head,*slow=head;
        while(fast&&fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
              break;
        }
        if(slow!=fast)
            return nullptr;
        slow=head;
        if(slow==fast)
            
            while (fast->next&&fast->next != slow)
                fast = fast->next;
        else
            while(slow->next!=fast->next)
        {
            slow=slow->next;
            fast=fast->next;
        }
        return fast->next;
    }
};