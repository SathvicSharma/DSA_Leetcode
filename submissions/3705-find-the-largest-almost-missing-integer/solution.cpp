class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        unordered_map<int,int>subCount;
        for(int i=0;i<k;i++)
            freq[nums[i]]++;
        for(auto &it:freq)
            subCount[it.first]++;
        for(int i=k;i<nums.size();i++)
        {
            freq[nums[i-k]]--;
            freq[nums[i]]++;
            for(auto &it:freq)
            {
                if(it.second>0)
                    subCount[it.first]++;
            }
        }
        int ans=-1;
        for(auto &it:subCount)
        {
            if(it.second==1)
                ans=max(ans,it.first);
        }
        return ans;
    }
};
