class Solution {
public:
    int minElement(vector<int>& nums) {
        int min_ele=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {          
            nums[i]=sum(nums[i]);
            min_ele=min(nums[i],min_ele);
        }
        return min_ele;
    }

    int sum(int x)
    {
        int sum=0;
        while(x>0)
        {
            sum+=x%10;
            x/=10;
        }
        return sum;
    }
};
