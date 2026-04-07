class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cur_cookie,j=0,ans=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
        {
            if(j>=g.size())
                return ans;
            cur_cookie=s[i];
            if(g[j]<=cur_cookie)
            {
                ans++;
                j++;
            }
            
        }
        return ans;
    }
};
