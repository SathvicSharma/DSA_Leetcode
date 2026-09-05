class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>minVal(nums.size());
        minVal[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--)
            minVal[i]=min(nums[i],minVal[i+1]);
        int max_val=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            max_val=max(max_val,nums[i]);
            if(max_val-minVal[i]<=k)
                return i;
        }
        return -1;
    }
};
