class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>freq;
        int dig;
        while(n>0)
        {
            dig=n%10;
            freq[dig]++;
            n/=10;
        }
        long long sum=0;
        for(auto &it:freq)
            sum+=(it.first*it.second);
        return sum;
        
    }
};
