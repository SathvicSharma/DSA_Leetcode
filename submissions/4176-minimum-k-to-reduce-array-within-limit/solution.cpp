class Solution {
public:
    int minimumK(vector<int>& nums) {
        long long min_op=0,i,ans=0;
        long long beg=1,mid,end=0;
        for(int i=0;i<nums.size();i++)
            end=max(end,(long long)nums[i]);
        end = max(end, (long long)nums.size());
        while(beg<=end)
        {
            mid=(beg+end)/2;
            min_op=0;
            for(i=0;i<nums.size();i++)
                {
                    if(nums[i]%mid==0)
                        min_op+=(nums[i]/mid);
                    else
                        min_op+=(nums[i]/mid)+1;
                }
            if(min_op<=mid*mid)
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                beg=mid+1;
            }
        }
        
        return ans;
    }
};
