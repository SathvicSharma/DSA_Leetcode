class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>lside,rside,pivot_all;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                lside.push_back(nums[i]);
            }
            else if(nums[i]>pivot)
            {
                rside.push_back(nums[i]);
            }
            else
            {
                pivot_all.push_back(nums[i]);
            }
        }
        lside.insert(lside.end(), pivot_all.begin(), pivot_all.end());
        lside.insert(lside.end(), rside.begin(), rside.end());
        
        return lside;
    }
};
