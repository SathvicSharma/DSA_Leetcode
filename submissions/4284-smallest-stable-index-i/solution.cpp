class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int max_num=INT_MIN,stable=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            max_num=max(max_num,nums[i]);
            int min_num=INT_MAX;
            for(int j=i;j<nums.size();j++)
            {
                min_num=min(min_num,nums[j]);
            }
            if(max_num-min_num<=k)
                return i;
        }
        return -1;
    }
};
