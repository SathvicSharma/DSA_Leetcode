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
        int size=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            size++;
            temp=temp->next;
        }
        if(size==1)
            return NULL;
        int rem_pos=size-n;
        ListNode* prev=NULL;
        temp=head;
        int count=0;
        while(count<rem_pos)
        {
            prev=temp;
            temp=temp->next;
            count++;
        }
        if(prev!=NULL)
        {
            prev->next=temp->next;
        }
        else
        {
            return temp->next;
        }
        temp->next=NULL;
        return head;
    }
};
