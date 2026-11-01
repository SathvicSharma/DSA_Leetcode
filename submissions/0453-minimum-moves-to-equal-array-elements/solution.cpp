class Solution {
public:
    int minMoves(vector<int>& nums) {
        int moves=0,min_val=INT_MAX;
        for(int i=0;i<nums.size();i++)
            min_val=min(min_val,nums[i]);
        for(int i=0;i<nums.size();i++)
            moves+=nums[i]-min_val;
        return moves;
    }
};
