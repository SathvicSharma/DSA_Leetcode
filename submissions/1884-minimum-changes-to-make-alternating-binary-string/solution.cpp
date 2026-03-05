class Solution {
public:
    int minOperations(string s) {
        char ch=s[0];
        int op1=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==ch)
            {
                op1++;
            }
            ch^=1;
        }
        int op2=0;
        ch=s[0]^1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==ch)
            {
                op2++;
            }
            ch^=1;
        }
        return min(op1,op2);
    }
};
