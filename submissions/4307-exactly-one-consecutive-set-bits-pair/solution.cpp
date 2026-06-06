class Solution {
public:
    bool consecutiveSetBits(int n) {
        string s=bin(n);
        int count=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='1'&&s[i+1]=='1')
                count++;
        }
        if(count!=1)
            return false;
        else
            return true;
    }

    string bin(int n)
    {
        string ans=""; 
        if(n==0)
            return "0";
        while(n>0)
            {
                if(n%2==0)
                    ans+="0";
                else
                    ans+="1";
                n/=2;
            }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
