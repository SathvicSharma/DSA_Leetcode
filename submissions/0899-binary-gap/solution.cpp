class Solution {
public:
    int binaryGap(int n) {
        int one_count=0;
        int check=0,max_dist=0;
        while(n>0)
        {
            if(n%2==1)
            {
                one_count++;
                if(check>max_dist)
                    max_dist=check;
                check=0;
            }
            if(one_count!=0)
                check++;
            n=n/2;
        }
        if(one_count<2)
            return 0;
        return max_dist;
    }
};
