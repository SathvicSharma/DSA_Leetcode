class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>freq;
        int max_freq=0,sum=0;
        for(int ch:nums)
            freq[ch]++;
        for (auto &p :freq)
        {
            if(p.second>max_freq)
            {
                sum=0;
                sum+=p.second;
                max_freq=p.second;
            }
            else if(p.second==max_freq)
            {
                sum+=p.second;
            }
        }
        return sum;

    }
};
