class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        long long ans=0,maxLeft=0;
        for(int j=k;j<nums.size();j++)
        {
            maxLeft=max(maxLeft,(long long)nums[j-k]);
            ans=max(ans,maxLeft+nums[j]);
        }
        return ans;
    }
};
