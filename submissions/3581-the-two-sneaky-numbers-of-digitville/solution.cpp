class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>freq;
        vector<int>ans;
        for(int ch:nums)
            freq[ch]++;
        for(auto &p:freq)
        {
            if(p.second>1)
                ans.push_back(p.first);
        }
        return ans;
    }
};
