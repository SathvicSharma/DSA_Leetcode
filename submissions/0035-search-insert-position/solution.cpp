class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid,beg=0,end=nums.size();
        while(beg<end)
        {
            mid=(beg+end)/2;
            if(nums[mid]>target)
                end=mid;
            else if(nums[mid]<target)
                beg=mid+1;
            else
                return mid;
        }
        return beg;
    }
};
