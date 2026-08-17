class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            int odd_count=0,even_count=0;
            for(int j=i;j<nums.size();j++)
            {
                if(nums[j]%2)
                    odd_count++;
                else
                    even_count++;
                if(!odd_count)
                    continue;          
                if(even_count*b<=a*odd_count)
                    count++;                
            }
        }
        return count;
    }
};
