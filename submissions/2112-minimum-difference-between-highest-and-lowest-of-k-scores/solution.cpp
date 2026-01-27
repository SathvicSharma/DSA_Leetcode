class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int minDiff=INT_MAX;;
        if(k==1)
            return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i+k-1<nums.size();i++)
        {
            minDiff=min(minDiff,nums[i+k-1]-nums[i]);
        }
        return minDiff;

    }
};
