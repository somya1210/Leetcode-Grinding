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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     int N=0;
        if(head->next==NULL)return NULL;
        ListNode* curr=head;
        while(curr)
        {
            curr=curr->next;
            N++;
        }
        cout<<N;
        n=N-n+1;
        cout<<n;
        int i=0;
        curr=head;
        ListNode* prev=NULL;
        while(i<n-1&&curr)
        {   prev=curr;
            curr=curr->next;
            i++;
        }
        if(!prev)
            return head->next;
        prev->next=curr->next;
        ListNode* tmp=curr;
        delete(tmp);
        
        return head;
    }
};