class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total=0,lsum=0,count = 0;
        for (int x : nums) total += x;

        for (int i = 0;i<nums.size()-1;i++) {
            lsum+=nums[i];
            int rsum=total-lsum;
            if ((lsum-rsum)%2==0)
                count++;
        }
        return count;
    }
};

