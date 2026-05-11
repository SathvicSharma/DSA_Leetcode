class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int beg=0,end=nums.size()-1,mid;
        int first=INT_MAX,last=INT_MIN;
        while(beg<=end)
        {
            mid=(beg+end)/2;
            if(nums[mid]>target)
                end=mid-1;
            else if(nums[mid]<target)
                beg=mid+1;
            else
            {
                first=min(first,mid);
                end=mid-1;
            }
        }
        beg=0,end=nums.size()-1;
        while(beg<=end)
        {
            mid=(beg+end)/2;
            if(nums[mid]>target)
                end=mid-1;
            else if(nums[mid]<target)
                beg=mid+1;
            else
            {
                last=max(last,mid);
                beg=mid+1;
            }
        }
        if(first==INT_MAX||last==INT_MIN)
            return {-1,-1};
        else
            return {first,last};
    }
};
