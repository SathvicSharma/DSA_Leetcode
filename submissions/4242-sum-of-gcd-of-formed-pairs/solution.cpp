class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int mxi=INT_MIN;
        vector<int>prefixGCD(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            mxi=max(mxi,nums[i]);
            int val=gcd(mxi,nums[i]);
            prefixGCD[i]=val;
        }
        sort(prefixGCD.begin(),prefixGCD.end());
        int left=0,right=prefixGCD.size()-1;
        long long sum=0;
        while(left<right)
        {
            int new_val=gcd(prefixGCD[left],prefixGCD[right]);
            sum+=new_val;
            left++;
            right--;
        }
        return sum;
    }
    int gcd(int a, int b)
    {
        if(b==0)
            return a;

        return gcd(b,a%b);
    }
};
