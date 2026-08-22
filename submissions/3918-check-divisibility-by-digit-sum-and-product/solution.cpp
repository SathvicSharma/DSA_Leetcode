class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0, product=1;
        int m=n;
        while(m>0)
        {
            int dig=m%10;
            sum+=dig;
            product*=dig;
            m/=10;
        }
        if(n%(sum+product)==0)
                  return true;
        else
                  return false;
        
    }
};
