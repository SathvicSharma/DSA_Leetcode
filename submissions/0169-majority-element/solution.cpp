class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int ch:nums)
            freq[ch]++;
        int max_freq=INT_MIN,max_ele;
        for(auto &it:freq)
        {
            if(max_freq<it.second)
            {
                max_ele=it.first;
                max_freq=it.second;
            }
        }
        return max_ele;
    }
};
