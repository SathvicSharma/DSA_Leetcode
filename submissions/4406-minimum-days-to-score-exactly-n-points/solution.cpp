class Solution {
public:
    int minDays(int n) {
        vector<int>dp(100001,1e9);
        dp[0]=-1;
        for(int i=1;i<=n;i++)
        {
            for(int k=1;(k*(k+1)/2)<=i;k++)
            {
                int points=k*(k+1)/2;
                dp[i]=min(dp[i],dp[i-points]+k+1);
            }
        }
        return dp[n];
    }
};
