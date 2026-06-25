class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int t_freq=0,count=0,arr_count;
        for(int i=0;i<nums.size();i++)
        {
            t_freq=0,arr_count=0;
            for(int j=i;j<nums.size();j++)
            {
                if(nums[j]==target)
                    t_freq++;
                arr_count++;
                if(t_freq>(arr_count)/2)
                    count++;
            }
        }
        return count;
    }
};
