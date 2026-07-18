class Solution {
public:
    int findGCD(vector<int>& nums) {
        int small=nums[0],large=nums[0];
        for(int ch:nums)
        {
            small=min(small,ch);
            large=max(large,ch);
        }
        return gcd(small,large);
    }
    int gcd(int a,int b)
    {
        if(a==0)
            return b;
        return gcd(b%a,a);
    }
};
