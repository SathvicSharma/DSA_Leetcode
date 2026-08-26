class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string res="";
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            count=0;
            for(int j=i;j<s.size();j++)
            {
                if(s[j]=='1')
                    count++;
                if(count==k)
                {
                     string curr = s.substr(i,j-i+1);
                    if (res==""||curr.size()<res.size()||(curr.size()==res.size()&&curr< res))
                        res=curr;                    
                    break;
                }
            }
        }
        return res;
    }
};
