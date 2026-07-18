class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1)
            return s;
        long long t=n/2;
        return (long long)s+(t*(long long)m)-(t-1);
    }
};
