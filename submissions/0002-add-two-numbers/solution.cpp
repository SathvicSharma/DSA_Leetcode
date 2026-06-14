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
        int sum=0,carry=0;
        ListNode* head=new ListNode;
        head=NULL;
        ListNode* temp;
        int count=0;
        while(l1!=NULL||l2!=NULL)
        {
            int val1=(l1!=NULL)?l1->val:0;
            int val2=(l2!=NULL)?l2->val:0;
            ListNode* node=new ListNode;
            sum=(val1+val2+carry)%10;
            carry=(val1+val2+carry)/10;
            node->val=sum;
            if(head==NULL)
            {
                head=node;
                temp=node;
            }
            else
            {
                temp->next=node;
                temp=node;
            }
            if(l1)
                l1=l1->next;
            if(l2)
                l2=l2->next;
        }
        if(carry)
        {
            ListNode* node=new ListNode;
            node->val=carry;
            temp->next=node;
            node->next=NULL;
        }
        return head;
        
    }
};
