class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        vector<long long> sum;
        vector<long long> prod;
        long long sum_ind = 0;
        long long prod_ind = 1;
        long long lim = 1e14;
        for(int i=0;i<nums.size();i++)
        {
            sum.push_back(sum_ind);
            sum_ind += nums[i];
        }

        for(int i=nums.size()-1;i>=0;i--)
        {
            prod.push_back(prod_ind);

            if(prod_ind>lim/nums[i])
                prod_ind=lim+1;
            else
                prod_ind *= nums[i];
        }

        for(int i=0;i<nums.size();i++)
        {
            if(prod[nums.size()-1-i]==sum[i])
                return i;
        }
        return -1;
    }
};
