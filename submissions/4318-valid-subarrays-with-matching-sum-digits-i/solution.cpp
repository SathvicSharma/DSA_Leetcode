class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            long long sum=0;
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                if(digFind(sum,x))
                    count++;
            }
        }
        return count;
    }
     bool digFind(long long x,int req)
    {
        int dig=0,first,last;
        last= x%10;
        while(x>0)
        {
            dig=x%10;
            x/=10;
        }
        first=dig;
        if(first==req&&last==req)
            return true;
        return false;
    }
};
