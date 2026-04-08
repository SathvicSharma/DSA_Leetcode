class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<long long>num_copy;
        for(int i=0;i<nums.size();i++)
        {
            num_copy.push_back(nums[i]);
        }
        long long start,end,factor,incr;
        for(int i=0;i<queries.size();i++)
        {
            start=queries[i][0];
            end=queries[i][1];
            incr=queries[i][2];
            factor=queries[i][3];
            for(int j=start;j<=end;j+=incr)
            {
                num_copy[j]=(num_copy[j]*factor)%(long long)(1e9+7);
            }
        }
        long long ans=num_copy[0];
        for(int i=1;i<num_copy.size();i++)
        {
            ans^=num_copy[i];
        }
        return ans;
    }
};
