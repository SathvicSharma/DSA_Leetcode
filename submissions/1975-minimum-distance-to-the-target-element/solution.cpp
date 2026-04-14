class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int min_ind=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                min_ind=min(min_ind,abs(i-start));
            }
        }
        return min_ind;
    }
};
