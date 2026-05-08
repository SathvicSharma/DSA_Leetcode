class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int x=revNum(n),sum=0;
        if(x>n)
            swap(x,n);
        for(int i=x;i<=n;i++)
        {
            if(isPrime(i))
                sum+=i;
        }
        return sum;
    }
    int revNum(int n)
    {
        int rev=0,dig;
        while(n>0)
        {
            dig=n%10;
            rev=rev*10+dig;
            n/=10;
        }
        return rev;
    }
    bool isPrime(int n)
    {
        if(n==1)
            return false;
        if(n==2||n==3)
            return true;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
};
