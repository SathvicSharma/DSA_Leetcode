class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int>freq(128,0);
        for(int i=0;i<s.size();i++)
           freq[s[i]]++;
        int sum=0;
        for(char ch='a';ch<='z';ch++)
        {
            char mirror='z'-(ch-'a');
            if(ch<=mirror)
                sum+=abs(freq[ch]-freq[mirror]);
        }
        for(char ch='0';ch <='9';ch++)
        {
            char mirror='9'-(ch-'0');
            if(ch <= mirror)
                sum+=abs(freq[ch]-freq[mirror]);
        }
        return sum;
    }
};
