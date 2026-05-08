class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        int x=0;
        double max_sum=sum;
        for(int i=k;i<nums.size();i++)
        {
            sum+=nums[i]-nums[x++];
            max_sum=max(max_sum,sum);
        }
        return max_sum/k;
    }
};
