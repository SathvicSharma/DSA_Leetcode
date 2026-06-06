class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
       vector<int>ans(nums.size());
       int tot_sum=0;
       for(int val:nums)
            tot_sum+=val;
        int left_sum=0,right_sum=tot_sum;
        for(int i=0;i<nums.size();i++)
        {
            right_sum-=nums[i];
            ans[i]=abs(left_sum-right_sum);
            left_sum+=nums[i];
        }
        return ans;
    }
};
