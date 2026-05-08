class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1,el2,count1=0,count2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count1==0&&nums[i]!=el2)
            {
                count1++;
                el1=nums[i];
            }
            else if(count2==0&&nums[i]!=el1)
            {
                count2++;
                el2=nums[i];
            }
            else if(nums[i]==el1)
                count1++;
            else if(nums[i]==el2)
                count2++;
            else
            {
                count1--;
                count2--;
            }
        }
        vector<int>ans;
        count1=0,count2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==el1)
                count1++;
            if(nums[i]==el2)
                count2++;
        }
        if(count1>(nums.size()/3))
            ans.push_back(el1);
        if(count2>nums.size()/3)
            ans.push_back(el2);
        return ans;
    }
};
