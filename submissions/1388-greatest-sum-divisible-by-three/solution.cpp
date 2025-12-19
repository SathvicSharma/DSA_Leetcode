class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int total=0,rem;
        for(int i=0;i<nums.size();i++)
        {
            total+=nums[i];
        }

        if(total%3==0)
            return total;
        else
            rem=total%3;
        
        int min_red=INT_MAX;
        int count=0;
        
        // find smallest number having remainder == rem
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] % 3 == rem)
            {
                count++;
                if(nums[i] < min_red)
                {
                    min_red = nums[i];
                }
            }
        }

        // if we found at least one valid single removal
        int ans = -1;
        if(count > 0)
            ans = total - min_red;

        // now handle removing 2 numbers
        // find 2 smallest numbers whose remainder == (3 - rem)
        int r = 3 - rem;
        int firstMin = INT_MAX;
        int secondMin = INT_MAX;
        
        for(int x : nums) 
        {
            if(x % 3 == r) 
            {
                if(x < firstMin) 
                {
                    secondMin = firstMin;
                    firstMin = x;
                }
                else if(x < secondMin) 
                {
                    secondMin = x;
                }
            }
        }
        
        if(firstMin != INT_MAX && secondMin != INT_MAX)
            ans = max(ans, total - firstMin - secondMin);

        return ans;
    }
};

