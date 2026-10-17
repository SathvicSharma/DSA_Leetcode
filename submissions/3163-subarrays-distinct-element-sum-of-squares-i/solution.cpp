class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum=0;
        for (int i=0;i<nums.size();i++)
        {
            vector<int>freq(101,0);
            int distinct=0;
            for (int j=i;j<nums.size();j++){
                if (freq[nums[j]]==0)
                    distinct++;
                freq[nums[j]]++;
                sum+=distinct*distinct;
            }
        }
        return sum;
    }
};
