class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        if(nums.size()==2)
        {
            if(nums[0]>nums[1])
                return 0;
            else
                return 1;
        }
        if(nums[0]>nums[1])
            return 0;
        if(nums[nums.size()-1]>nums[nums.size()-2])
                return nums.size()-1;
        int beg=1,end=nums.size()-2;
        while(beg<=end)
        {
            int mid=(beg+end)/2;
            if(nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1])
                return mid;
            else if(nums[mid]>nums[mid+1]&&nums[mid]<nums[mid-1])
                end=mid-1;
            else
                beg=mid+1;
        }
        return -1;
    }
};
