class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        vector<int> freq(26, 0);
        for(char ch : s)
            freq[ch - 'a']++;

        int x = 0;
        string ans = "";
        while(x < target.size())
        {
            if(freq[target[x]-'a'])
            {
                ans+=target[x];
                freq[target[x]-'a']--;
                x++;
            }
            else
                break;
        }
        if(x==target.size())
        {
            freq[ans.back()-'a']++;
            ans.pop_back();
            x--;
        }
        while(x>=0)
        {
            int temp=target[x]-'a'+1;
            while(temp<26&&freq[temp]==0)
                temp++;
            if(temp<26)
            {
                ans+=temp+'a';
                freq[temp]--;
                break;
            }
            if(!ans.empty())
            {
                freq[ans.back()-'a']++;
                ans.pop_back();
            }
            x--;
        }
        if(x < 0)
            return "";
        for(int i=0;i<26;i++)
        {
            while(freq[i])
            {
                ans+=(i+'a');
                freq[i]--;
            }
        }
        return ans;
    }
};
