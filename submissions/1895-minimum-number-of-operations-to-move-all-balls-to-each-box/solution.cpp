class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ans(n, 0);
        int count = 0, cost = 0;
        for (int i=0;i<n;i++)
        {
            ans[i] += cost;
            if (boxes[i] == '1') 
                count++;
            cost+=count;
        }
        count=0;
        cost=0;
        for(int i=n-1;i>=0;i--) 
        {
            ans[i] += cost;
            if (boxes[i] =='1') 
                count++;
            cost+=count;
        }
        return ans;
    }
};
