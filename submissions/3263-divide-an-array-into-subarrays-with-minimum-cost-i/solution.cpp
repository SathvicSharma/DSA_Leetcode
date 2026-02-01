class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int sum=0,small=INT_MAX,sec_small=INT_MAX,num;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<small)
            {
                sec_small=small;
                small=nums[i];
            }
            else if(nums[i]<sec_small)
            {
                sec_small=nums[i];
            }
        }
       
        return small+sec_small+nums[0];
    }
};
