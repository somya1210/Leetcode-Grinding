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
    ListNode* reverse(ListNode* node)
    {
        ListNode* curr=node,*prev=NULL,*next;
        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            
        }
        return prev;
    }
    int pairSum(ListNode* head) {
       ListNode* fast=head,*slow=head;
        while(fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        //return slow->val;
        ListNode* rev=reverse(slow);
      // return rev->next->next->val;
      int ans=0;
        ListNode* tmp=head;
        //return tmp->val;
        while(rev)
        {
          //  int value=tmp->val+rev->val;
            ans=max(ans,tmp->val+rev->val);
            //if(value>ans)
              //  ans=value;
            rev=rev->next;
            tmp=tmp->next;
        }
        return ans;
    }
};