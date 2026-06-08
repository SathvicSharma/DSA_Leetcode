class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>lesser,greater,piv;
        for(int i=0;i<nums.size();i++)
        {
            if(pivot<nums[i])
                greater.push_back(nums[i]);
            else if(pivot>nums[i])
                lesser.push_back(nums[i]);
            else
                piv.push_back(nums[i]);
        }
        int l=0,g=0,p=0;
        for(int i=0;i<nums.size();i++)
        {
            if(l<lesser.size())
            {
                nums[i]=lesser[l++];
            }
            else if(p<piv.size())
            {
                nums[i]=piv[p++];
            }
            else
                nums[i]=greater[g++];
        }
        return nums;
    }
};
