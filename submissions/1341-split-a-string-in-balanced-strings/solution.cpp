class Solution {
public:
    int balancedStringSplit(string s) {
        int x=s.size()-1,sym=0,count=0,i=0;
        while(i<=x)
        {
            if(s[i]=='L')
                sym++;
            else
                sym--;
            if(sym==0)
                count++;
            i++;
        }
        return count;
    }
};
