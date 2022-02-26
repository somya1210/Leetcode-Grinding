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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head=new ListNode(0),*p=head,*head1=l1,*head2=l2;
        
       int carry_data=0;
        while(head1||head2||carry_data)
        {
            if(head1)
            {carry_data+=head1->val;
             head1=head1->next;
            }
            if(head2)
            {
                carry_data+=head2->val;
                head2=head2->next;
            } 
            ListNode* new_node=new ListNode(carry_data%10);
            p->next=new_node;
            p=p->next;
            carry_data=carry_data/10;
            
        }
        return head->next;
    }
};