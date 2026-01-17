class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
        int operations=0;
        int x,j;
        unordered_set<int>ans;
        for(int i=0;i<nums.size();i++)
        {
              if(nums[i]!=target[i])
              {
                  operations++;
                  ans.insert(nums[i]);
              }
        }
        return ans.size();
    }
};
