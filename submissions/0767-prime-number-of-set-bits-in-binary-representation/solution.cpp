class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int count=0,set_count;
        while(left<=right)
        {
            set_count= __builtin_popcount(left);
            if(isPrime(set_count))
                count++;
            left++;
        }
        return count;
    }
    bool isPrime(int n)
    {
        if(n==1)
            return false;
        if(n==2)
            return true;
        if(n==3)
            return true;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
};
