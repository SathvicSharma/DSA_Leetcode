class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long max_strength=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                long long g=gcd(nums[i],nums[j]);
                long long strength=(1LL*nums[i]*nums[j])/(g*g);
                max_strength=max(max_strength,strength);
            }

        }
        return max_strength;
    }
    int gcd(int a,int b)
    {
        if(a==0)
            return b;
        else
            return gcd(b%a,a);
    }
};
