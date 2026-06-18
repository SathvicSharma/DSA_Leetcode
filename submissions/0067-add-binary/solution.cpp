class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size()>b.size())
        {
            while(b.size()!=a.size())
            {
                b='0'+b;
            }
        }
        if(a.size()<b.size())
        {
            while(a.size()!=b.size())
            {
                a='0'+a;
            }
        }
        string res=a;
        int carry=0;
        for(int i=a.size()-1;i>=0;i--)
        {
            int val1=a[i]-'0';
            int val2=b[i]-'0';
            if(val1+val2==0)
            {
                if(carry==0)
                    res[i]='0';
                else
                {
                    res[i]='1';
                    carry=0;
                }
            }
            else if(val1+val2==1)
            {
                if(carry==0)
                    res[i]='1';
                else
                {
                    res[i]='0';
                    carry=1;
                }
            }
            else
            {
                if(carry==0)
                    res[i]='0';
                else
                    res[i]='1';
                carry=1;
            }
        }
        if(carry==1)
            res='1'+res;
        return res;
    }
};
