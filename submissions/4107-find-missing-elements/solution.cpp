class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int max_val=INT_MIN,min_val=INT_MAX;
        for(int val:nums)
        {
            min_val=min(min_val,val);
            max_val=max(max_val,val);
        }
        vector<int>present(max_val+1,0);
        for(int i=0;i<nums.size();i++)
            present[nums[i]]=1;
        vector<int>ans;
        for(int i=min_val;i<present.size();i++)
        {
            if(!present[i])
                ans.push_back(i);
        }
        return ans;
    }
};
