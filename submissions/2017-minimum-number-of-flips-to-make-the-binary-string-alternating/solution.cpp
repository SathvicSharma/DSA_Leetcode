class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        string t =s+s;
        int op1=0,op2=0,res=INT_MAX;
        for (int i=0;i<t.size();i++) {
            char c1 = (i%2?'1':'0');
            char c2 = (i%2?'0':'1');
            if (t[i] != c1) 
                op1++;
            if (t[i] != c2)
                op2++;
            if (i>=n){
                char prev = t[i - n];
                char pc1 = ((i - n) % 2 ? '1' : '0');
                char pc2 = ((i - n) % 2 ? '0' : '1');
                if(prev!=pc1)
                    op1--;
                if(prev!=pc2)
                    op2--;
            }
            if (i>=n-1) 
            {
                res = min(res, min(op1, op2));
            }
        }
        return res;
    }
};
