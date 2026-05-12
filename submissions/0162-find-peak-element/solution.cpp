class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int beg=1,end=nums.size()-2,mid;
        if(nums.size()==1)
            return 0;
        if(nums[0]>nums[1])
            return 0;
        if(nums[nums.size()-1]>nums[nums.size()-2])
            return nums.size()-1;
        while(beg<=end)
        {
            mid=(beg+end)/2;
            if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1])
                return mid;
            else if(nums[mid]>nums[mid-1]&&nums[mid]<nums[mid+1])
                beg=mid+1;
            else
                end=mid-1;
        }
        return -1;
    }
};
