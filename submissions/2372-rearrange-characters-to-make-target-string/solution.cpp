class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int count=INT_MAX;
        int freqs[26]={0};
        int freqt[26]={0};
        for(char ch:target)
            freqt[ch-'a']++;
        for(char ch:s)
            freqs[ch-'a']++;
        for(char ch:target)
        {
            if(freqt[ch-'a']!=0)
            {
                int min_val=freqs[ch-'a']/freqt[ch-'a'];
                count=min(min_val,count);
            }
        }
        return count;
    }
};
