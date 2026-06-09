class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long minVal=INT_MAX,maxVal=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            minVal=min(minVal,(long long)nums[i]);
            maxVal=max(maxVal,(long long)nums[i]);
        }
        long long ans=k*(maxVal-minVal);
        return ans;
    }
};
