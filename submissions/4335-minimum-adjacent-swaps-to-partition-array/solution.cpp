class Solution {
public:
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        long long MOD=1e9+7;
        int swaps=0,c1=0,c2=0,c3=0;
        for(int i=0;i<nums.size();i++)
            {
                if(nums[i]<a)
                {
                    swaps=(swaps+c2+c3)%MOD;
                    c1++;
                }
                else if(nums[i]>=a&&nums[i]<=b)
                {
                    swaps=(swaps+c3)%MOD;
                    c2++;
                }
                else
                    c3++;
            }
        return swaps;
    }
};
