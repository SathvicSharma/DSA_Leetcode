class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0,cost=0,min_val=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            cost=prices[i]-min_val;
            max_profit=max(max_profit,cost);
            min_val=min(min_val,prices[i]);
        }
        return max_profit;
    }
};
