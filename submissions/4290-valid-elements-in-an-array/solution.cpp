class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<int>ans;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            int forw=i+1,back=i-1;
            while(forw<nums.size())
            {
                if(nums[i]<=nums[forw])
                    break;
                forw++;
            }
            while(back>=0)
            {
                if(nums[i]<=nums[back])
                    break;
                back--;
            }
            if(forw==nums.size()||back==-1)
                ans.push_back(nums[i]);
        }
        return ans;
    }
};
