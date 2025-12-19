class Solution {
public:
    int scoreOfString(string s) {
        int sum=0,x,n;
        n=s.size();
        for(int i=1;i<n;i++)
        {
            x=abs(s[i]-s[i-1]);
            sum+=x;
        }
        return sum;
    }
};
