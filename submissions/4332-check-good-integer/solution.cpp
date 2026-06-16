class Solution {
public:
    bool checkGoodInteger(int n) {
     int squareSum=0,digitSum=0,dig;
     while(n>0)
     {
        dig=n%10;
        digitSum+=dig;
        squareSum+=dig*dig;
        n/=10;
     }
        if(squareSum-digitSum>=50)
            return true;
        else
            return false;  
    }
};
