class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int x_freq=0,y_freq=0;
        for(char ch:s)
            {
                if(ch==x)
                    x_freq++;
                if(ch==y)
                    y_freq++;
            }
        string t="";
        for(int i=0;i<s.size();i++)
            {
                if(s[i]==x||s[i]==y)
                    continue;
                else
                    t+=s[i];
            }
        int i=0,j=0;
        while(i<y_freq)
        {
            t+=y;
            i++;
        }
        while(j<x_freq)
        {
            t+=x;
            j++;
        }
        return t;
        
    }
};
