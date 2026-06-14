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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp;
        temp=head;
        while(temp->next!=NULL)
        {
            ListNode* node=new ListNode;
            node->val=gcd(temp->val,temp->next->val);
            node->next=temp->next;
            temp->next=node;
            temp=node->next;
        }
        return head;
    }

    int gcd(int a, int b)
    {
        if(b==0)
            return a;
        return gcd(b,a%b);
    }
};
