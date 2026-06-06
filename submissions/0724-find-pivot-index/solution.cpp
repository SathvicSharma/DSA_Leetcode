class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int right_sum=0;
        for(int val:nums)
            right_sum+=val;
        int left_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            right_sum-=nums[i];
            if(left_sum==right_sum)
                return i;
            left_sum+=nums[i];
        }
        return -1;
    }
};
