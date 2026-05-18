class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int dist=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                for(int j=0;j<nums.size();j++)
                {
                    if(nums[j]==2)
                        dist=min(abs(i-j),dist);
                }
            }
        }
        return dist==INT_MAX?-1:dist;
    }
};
