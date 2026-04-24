class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
            return 0;
        if(x<2)
            return 1;
        long long beg=0,end=x,mid,ans=0;
        while(beg<=end)
        {
            mid=beg+(end-beg)/2;
            long long square=mid*mid;
            if(square<x)
            {
                ans=mid;
                beg=mid+1;
            }
            else if(square>x)
                end=mid-1;
            else
                return mid;
        }
        return ans;
    }
};
