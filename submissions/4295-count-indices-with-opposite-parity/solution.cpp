class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int even_count=0,odd_count=0;
        for(int ch:nums)
        {
            if(ch%2==0)
                even_count++;
            else
                odd_count++;
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                ans.push_back(odd_count);
                even_count--;
            }
            else
            {
                ans.push_back(even_count);
                odd_count--;
            }
        }
        return ans;
    }
};
