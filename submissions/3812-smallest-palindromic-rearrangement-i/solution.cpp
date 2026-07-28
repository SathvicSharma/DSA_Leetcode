class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>freq(26,0);
        for(char ch:s)
            freq[ch-'a']++;
        string first="";
        string odd;
        for(int i=0;i<freq.size();i++)
        {
            first.append(freq[i]/2,char('a'+i));
            if(freq[i]%2!=0)
                odd=char('a'+i);
        }
        string last=first;
        reverse(last.begin(),last.end());
        string ans=first+odd+last;
        return ans;
    }
};
