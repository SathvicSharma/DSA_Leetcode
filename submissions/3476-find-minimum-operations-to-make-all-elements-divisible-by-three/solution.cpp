class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]%3==0)
                continue;
            else if(nums[i]%3==1)
            {
                nums[i]--;
                count++;
            }
            else
            {
                nums[i]++;
                count++;
            }
        }
        return count;
    }
};
