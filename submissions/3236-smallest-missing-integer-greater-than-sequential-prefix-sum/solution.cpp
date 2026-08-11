class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int run_sum=nums[0],max_sum=nums[0],count=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-1==nums[i-1])
                run_sum+=nums[i];
            else
                break;
        }
        max_sum=max(max_sum,run_sum);       
        sort(nums.begin(),nums.end());
        int target=max_sum;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]<target)
                    continue;
                else if(nums[i]==target)
                {
                    target=target+1;
                }
                else
                    return target;
            }
        return target;
    }
};
