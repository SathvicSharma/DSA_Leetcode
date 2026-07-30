class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26,0);
        for(char ch:word)
            freq[ch-'a']++;
        sort(freq.begin(),freq.end());
        int cost=0,cur_rate=1;
        int count=0;
        for(int i=freq.size()-1;i>=0;i--)
        {
            if(freq[i]!=0)
            {
                cost+=freq[i]*cur_rate;
                count++;
            }
            if(count%8==0)
                cur_rate++;
        }
        return cost;

    }
};
