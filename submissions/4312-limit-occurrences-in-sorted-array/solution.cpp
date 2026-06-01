class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
            freq[nums[i]]++;
        for(auto &it:freq)
        {
            if(it.second>k)
            {
                for(int i=0;i<k;i++)
                    ans.push_back(it.first);
            }
            else
            {
                for(int i=0;i<it.second;i++)
                    ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;

    }
};
