class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int left=0,right,ans=INT_MAX,sum=0;
        unordered_map <int,int>freq;
        for(right=0;right<nums.size();right++)
        {
            if(freq[nums[right]]==0)
                sum+=nums[right];
            freq[nums[right]]++;
            while(sum>=k)
            {
                if(ans>(right-left+1))
                  ans=right-left+1;
                freq[nums[left]]--;
                if(freq[nums[left]]==0)
                    sum-=nums[left];
                left++;
            }
        }
        if(ans==INT_MAX)
            return -1;
        else
            return ans;
    }
};
