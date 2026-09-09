class Solution {
public:
    long long countCommas(long long n) {
        long long count=0;
        if(n<1000)
            return 0;
        else if(n>=1000&&n<1000000)
            count=n-1000+1;
        else if(n>=1000000&&n<1000000000)
            count=999000+2*(n-1000000)+2;
        else if(n>=1e9&&n<1e12)
            count=999000+2*999000000+3*(n-1e9)+3;
        else
            count=999000+2*999000000+3*999000000000+4*(n-1e12)+4;
        if(n==1e15)
            count+=1;
        return count;  
    }
};
