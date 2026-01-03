class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int lim=nums.size()/2;
        unordered_map<int,int>freq;
        for(int ch:nums)
            freq[ch]++;
        for (auto &p : freq)
        {     if(p.second==lim)
                return p.first;
        }

        return -1;
    }
};
