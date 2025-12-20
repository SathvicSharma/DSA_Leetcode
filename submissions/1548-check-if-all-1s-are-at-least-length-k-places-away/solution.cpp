class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                for(int j=0;j<k;j++)
                {
                    if(i+j+1>=nums.size()) break;
                    if(nums[i+j+1]!=0)
                        return false;
                }
            }
        }
        return true;
    }
};
