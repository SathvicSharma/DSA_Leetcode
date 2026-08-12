class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        int left=0,right=0;
        int size=0;
        for(int i=0;i<nums.size();i++)
        {
                freq[nums[i]]++;
                while(freq[nums[right]]>k)
                {
                    freq[nums[left]]--;
                    left++;
                }
                size=max(size,right-left+1);
                right++;
        }
        return size;
    }
};
