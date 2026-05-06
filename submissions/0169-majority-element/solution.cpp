class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,ele=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            {
                ele=nums[i];
                count=0;
            }
            if(nums[i]==ele)
                count++;
            else
                count--;
        }
        int freq=0;
        for(int c:nums)
        {
            if(c==ele)
                freq++;
        }
        if(freq>(nums.size()/2))
            return ele;
        else
            return -1;
    }
};
