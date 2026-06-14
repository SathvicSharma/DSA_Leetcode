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
    int pairSum(ListNode* head) {
        int n=0;
        ListNode* t=head;
        while(t!=NULL)
        {
            n++;
            t=t->next;
        }
        ListNode* temp;
        ListNode* prev=NULL;
        temp=head;
        int count=0;
        while(count<n/2)
        {
            prev=temp;
            temp=temp->next;
            count++;
        }
        prev->next=NULL;
        
        prev=NULL;
        ListNode* curr=temp;
        while(curr)
        {
            ListNode* nextNode=curr->next;
            curr->next=prev;               
            prev=curr;                     
            curr=nextNode;                 
        }
        int cur_sum=0,max_sum=INT_MIN;
        ListNode* A=head;
        ListNode* B=prev;
        while(A!=NULL&&B!=NULL)
        {
            cur_sum=A->val+B->val;
            max_sum=max(max_sum,cur_sum);
            A=A->next;
            B=B->next;
        }
        return max_sum;
    }
};
