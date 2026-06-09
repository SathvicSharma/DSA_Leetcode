class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int sum=0;
        for(int i=max(1,-k+n);i<=k+n;i++)
        {
            if((n&i)==0)
                sum+=i;
        }
        return sum;
    }
};
