class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int freq=0,dig;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==digit)
            {
                freq++;
                continue;
            }
                while(nums[i]>0)
                {
                    dig=nums[i]%10;
                    if(dig==digit)
                            freq++;
                    nums[i]/=10;
                }
        }
        return freq;
    }
};
