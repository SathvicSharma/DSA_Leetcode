class Solution {
public:
    int rotatedDigits(int n) {
        int count=0;
        for(int i=1;i<=n;i++)
        {
            int num=i;
            int val_flag=1,good_flag=0;
            while(num>0)
            {
                int dig=num%10;
                if(dig==3||dig==4||dig==7)
                {
                    val_flag=0;
                    break;
                }
                if(dig==2||dig==5||dig==6||dig==9)
                    good_flag=1;
                num/=10;
            }
            if(val_flag&&good_flag)
                count++;
        }
        return count;
    }
};
