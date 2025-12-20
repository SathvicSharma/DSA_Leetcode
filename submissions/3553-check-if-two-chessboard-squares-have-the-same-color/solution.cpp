class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        //storing 1 for white and 0 for white
        int alp1=coordinate1[0];
        int alp2=coordinate2[0];
        int num1=coordinate1[1];
        int num2=coordinate2[1];
        int c1=1,c2=1,i=0;
        while((alp1-'a'-i)!=0)
        {
            c1=1-c1;
            i++;
        }
        int j=0;
        while((alp2-'a'-j)!=0)
        {
            c2=1-c2;
            j++;
        }
        i=2;
        while(i<=num1)
        {
            c1=1-c1;
            i++;
        }
        j=2;
        while(j<=num2)
        {
            c2=1-c2;
            j++;
        }
        if(c1==c2)
            return true;
        else
            return false;
    }
};
