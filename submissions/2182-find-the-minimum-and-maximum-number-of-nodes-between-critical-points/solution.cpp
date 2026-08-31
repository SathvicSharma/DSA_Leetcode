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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head->next->next==NULL)
            return {-1,-1};
        ListNode* temp=head->next;
        ListNode*prev=head;
        int count=0,first_count=-1,prev_val=-1,min_dist=INT_MAX,max_dist=INT_MIN;
        while(temp->next!=NULL)
        {
            count++;
            if((temp->val>prev->val&&temp->val>temp->next->val)||(temp->val<prev->val&&temp->val<temp->next->val))
            {
                if(prev_val==-1)
                {
                    prev_val=count;
                    first_count=count;
                    prev=temp;
                }
                else
                {
                    min_dist=min(min_dist,count-prev_val);
                    prev_val=count;
                }
            }
            prev=temp;
            temp=temp->next;
        }
        max_dist=prev_val-first_count;
        if(max_dist==0)
            max_dist=-1;
        if(min_dist==INT_MAX)
            min_dist=-1;
        return {min_dist,max_dist};
    }
};
