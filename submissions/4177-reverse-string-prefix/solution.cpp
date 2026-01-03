class Solution {
public:
    string reversePrefix(string s, int k) {
        if(k==1)
            return s;
        string ans(s.size(),' ');
        int j=0;
        for(int i=k-1;i>=0;i--)
        {
            ans[j]=s[i];
            j++;
        }
        for(int i=k;i<s.size();i++)
        {
            ans[j]=s[i];
            j++;
        }
        return ans;
    }
};
