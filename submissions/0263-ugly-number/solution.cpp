class Solution {
public:
    bool isUgly(int n) {
        int m=n;
        while(m>=1)
        {
            if(m%2==0)
                m/=2;
            else if(m%3==0)
                m/=3;
            else if(m%5==0)
                m/=5;
            else if(m==1)
                return true;
            else
                return false;
        } 
        return false;  
    }
};
