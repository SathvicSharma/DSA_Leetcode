class Solution {
public:
    int largestInteger(int n, int s) {
        int beg=pow(10,n);
        for(int i=beg-1;i>=0;i--)
        {
            int sum=found_sum(i);
            if(sum==s)
                return i;
        }
        return -1;
    }
    int found_sum(int val)
    {
        int sum=0;
        while(val>0)
        {
            int dig=val%10;
            sum+=dig;
            val/=10;
        }
        return sum;
    }
};
