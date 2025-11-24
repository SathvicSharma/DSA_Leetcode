class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        for (int i = n-1;i>0;i--) 
        {
            if (nums[i]>nums[i-1]) 
            {
                int pivotIndex = i - 1;
                int pivot = nums[pivotIndex];

                int j = n - 1;
                while (nums[j] <= pivot) j--;

                swap(nums[pivotIndex], nums[j]);
                reverse(nums.begin() + pivotIndex + 1, nums.end());
                return;
            }
        }

        sort(nums.begin(), nums.end());
    }
};

