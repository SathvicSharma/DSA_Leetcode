class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int j=0,count=0,max_count=0;
        if(nums.size()==1&&nums[0]==0)
            return 0;
        if(nums.size()==1&&nums[0]==1)
            return 1;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
                max_count=max(max_count,count);
            }
            else
            {
                count=0;
            }
        }
        return max_count;
    }
};
