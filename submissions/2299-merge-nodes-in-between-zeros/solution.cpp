class Solution
{
public:

    ListNode* mergeNodes(ListNode* head) {

        ListNode* temp = head->next; // skip first 0
        ListNode* headval = NULL;
        ListNode* prev = NULL;

        int sum = 0;

        while(temp != NULL)
        {
            if(temp->val == 0)
            {
                ListNode* node = new ListNode(sum);
                if(headval==NULL)
                {
                    headval=node;
                    prev=node;
                }
                else
                {
                    prev->next=node;
                    prev=node;
                }
                sum=0;
            }
            else
                sum += temp->val;
            temp=temp->next;
        }
        return headval;
    }
};
        
