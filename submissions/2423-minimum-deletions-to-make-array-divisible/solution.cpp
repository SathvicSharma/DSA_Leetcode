class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int g = numsDivide[0];

        for (int i = 1; i < numsDivide.size(); i++) {
            g = gcd(g, numsDivide[i]);
        }

        sort(nums.begin(), nums.end());

        int deletions = 0;

        for (int x : nums) {
            if (g % x == 0) 
                return deletions;

            if (deletions < nums.size() && (deletions == 0 || nums[deletions] == x))
                deletions++;
        }

        return -1;
    }
};

