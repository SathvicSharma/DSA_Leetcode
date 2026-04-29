class Solution {
public:
    bool validDigit(int n, int x) {
        int flag=0,check=0,dig;
        while(n>0)
        {
            dig=n%10;
            if(dig==x)
                flag=1;
            n/=10;
        }
        if(dig!=x)
            check=1;
        if(flag&&check)
            return true;
        else
            return false;
    }
};
