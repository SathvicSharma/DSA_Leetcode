class Solution {
public:
    bool isPrime(int x) {
        if (x <= 1) 
            return false;
        for (int i = 2; i <= sqrt(x); i++) 
        {
            if (x % i == 0)
                return false;
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        int maxPrime = 0;

        for (int i = 0; i < n; i++) 
        {
            if (isPrime(nums[i][i]))
                maxPrime = max(maxPrime, nums[i][i]);

            if (isPrime(nums[i][n-i-1]))
                maxPrime = max(maxPrime, nums[i][n-i-1]);
        }
        return maxPrime;
    }
};

