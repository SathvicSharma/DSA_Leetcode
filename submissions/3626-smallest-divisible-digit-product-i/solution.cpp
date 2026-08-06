class Solution {
public:
    int smallestNumber(int n, int t) {
        int prod=1,m=n;
        prod=calc_prod(m);
        if(prod%t==0)
            return n;
        else
        {
            int next=n+1;
            while(1)
            {
                prod=calc_prod(next);
                if(prod%t==0)
                    return next;
                else
                    next=next+1;
            }
        }
        return -1;
    }

    int calc_prod(int x)
    {
        int prod=1;
        while(x>0)
        {
            int dig=x%10;
            prod*=dig;
            x/=10;
        }
        return prod;
    }
};
