class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        vector<bool>cond(nums.size(),false);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=minK&&nums[i]<=maxK)
                cond[i]=true;
        }
        long  long count=0;
        long long total=0;
        for(int i=0;i<cond.size();i++)
        {
            if(!cond[i])
            {
                total+=(count*(count+1))/2;
                count=0;
            }
            else
                count++;
        }
        total+=(count*(count+1))/2;
        return total;
    }
};
