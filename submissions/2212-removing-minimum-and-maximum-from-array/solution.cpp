class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if(nums.size()==1)
            return 1;
        if(nums.size()==2)
            return 2;
        int min_pos=-1,max_pos=-1;
        int min_val=INT_MAX,max_val=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max_val)
            {
                max_val=nums[i];
                max_pos=i;
            }
            if(nums[i]<min_val)
            {
                min_val=nums[i];
                min_pos=i;
            }
        }
        int del_front=max(min_pos,max_pos)+1;
        int del_back=nums.size()-min(min_pos,max_pos);
        int both_sides=min(min_pos,max_pos)+1+(nums.size()-max(min_pos,max_pos));
        return min(del_front,min(del_back,both_sides));

    }
};
