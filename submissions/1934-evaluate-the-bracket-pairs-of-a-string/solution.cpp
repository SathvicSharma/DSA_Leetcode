class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mp;
        for(int i=0;i<knowledge.size();i++)
            mp[knowledge[i][0]]=knowledge[i][1];
        string ans="";
        int i=0;
        while(i<s.size())
        {
            if(s[i]=='(')
            {
                string cur="";
                i++;
                while(s[i]!=')')
                {
                    cur+=s[i];
                    i++;
                }
                if(mp.find(cur)!=mp.end())
                {
                    ans+=mp[cur];
                }
                else
                    ans+='?';
                i++;
            }
            else
            {
                ans+=s[i];
                i++;
            }
        }
        return ans;
    }
};
