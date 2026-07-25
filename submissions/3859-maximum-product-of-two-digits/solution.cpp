class Solution {
public:
    int maxProduct(int n) {
        int max_dig=INT_MIN,sec_max=INT_MIN;
        while(n>0)
        {
            int dig=n%10;
            if(dig>max_dig)
            {
                sec_max=max_dig;
                max_dig=dig;
            }
            else if(dig>sec_max)
                sec_max=dig;
            n/=10;
        }
        return sec_max*max_dig;
    }
};
