class Solution {
public:
    bool check(vector<int>& nums) {
        int rot_pos=-1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                rot_pos=i+1;
                break;
            }
        }
        if(rot_pos==-1)
            return true;
        for(int i=rot_pos;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
                return false;
        }
        if(nums[0]<nums[nums.size()-1])
            return false;
        return true;
    }
};
