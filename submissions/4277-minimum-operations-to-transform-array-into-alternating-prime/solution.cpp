class Solution {
public:
    int minOperations(vector<int>& nums) {
        int op=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                int p=nextPrime(nums[i]);
                op+=p-nums[i];
            }
            else
            {
                int x=nums[i];
                while(isPrime(x))
                    x++;
                op+=(x-nums[i]);
            }
        }
        return op;
    }
    bool isPrime(int x)
    {
        if(x<2)
             return false;
        for(int i=2;i*i<=x;i++)
        {
            if(x%i==0)
                return false;
        }
        return true;
    }
    int nextPrime(int x)
    {
        while(!isPrime(x))
            x++;
        return x;
    }
};
