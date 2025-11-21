class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            if(val!=nums[i])
            {
                nums[count++]=nums[i];
            }
        }
        return count;
    }
};
