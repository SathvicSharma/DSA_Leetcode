class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum=0,count=0,div_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=1;j<=sqrt(nums[i]);j++)
            {
                if(nums[i]%j==0)
                {
                    count+=2;
                    div_sum=div_sum+j;
                    if(j*j!=nums[i])
                    {
                        div_sum+=(nums[i]/j);
                    }
                    else
                        count--;
                }
            }
            if(count==4)
                sum+=div_sum;
            count=0;
            div_sum=0;
        }
        return sum;
    }
};
