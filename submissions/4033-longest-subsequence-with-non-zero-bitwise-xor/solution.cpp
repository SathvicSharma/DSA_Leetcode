class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xorVal=0;
        bool hasNonZero=false;
        for(int i=0;i<nums.size();i++)
        {
            xorVal^=nums[i];
            if(nums[i]!=0)
                hasNonZero=true;
        }
        if(xorVal!=0)
            return nums.size();
        if(hasNonZero)
            return nums.size()-1;
        return 0;
    }
};
