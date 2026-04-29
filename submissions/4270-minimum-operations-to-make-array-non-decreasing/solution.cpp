class Solution {
public:
    long long minOperations(vector<int>& nums) {
        long long op=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
                op+=nums[i]-nums[i+1];
        }
        return op;
    }
};
