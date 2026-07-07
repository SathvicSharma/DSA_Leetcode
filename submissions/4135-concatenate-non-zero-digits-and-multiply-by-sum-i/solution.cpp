class Solution {
public:
    vector<int>ans;
    long long sumAndMultiply(int n) {
        long long sum=div(n);
        long long x=0;
        reverse(ans.begin(),ans.end());
        for(int i=ans.size()-1;i>=0;i--)
            x+=ans[i]*pow(10,ans.size()-1-i);
        return x*sum;
        
    }
    long long div(int n)
    {
        long long tot=0;
        while(n>0)
        {
            int dig=n%10;
            if(dig!=0)
                ans.push_back(dig);
            tot+=dig;
            n/=10;
        }
        return tot;
    }
};
