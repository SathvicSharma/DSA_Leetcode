class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        vector<int>asc,des;
        int peak_ind;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]<nums[i])
                asc.push_back(nums[i-1]);
            else
            {
                peak_ind=i-1;
                asc.push_back(nums[peak_ind]);
                break;
            }
        }
        des.push_back(nums[peak_ind]);
        for(int j=peak_ind+1;j<nums.size();j++)
            des.push_back(nums[j]);
        long long sum_asc=0,sum_desc=0;
        for(int num:asc)
            sum_asc+=num;
        for(int num:des)
            sum_desc+=num;
        if(sum_asc>sum_desc)
            return 0;
        else if(sum_desc>sum_asc)
            return 1;
        else
            return -1;
    }
};
