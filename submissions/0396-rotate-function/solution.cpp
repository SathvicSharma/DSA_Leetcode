class Solution
 {
public:
        int maxRotateFunction(vector<int>& nums) {
        int sum=0;
        for(int num: nums) 
               sum+=num;
        int prev=0;
        for(int i=0;i<nums.size();i++)
               prev+=(i*nums[i]);
        int max_val=prev;
        for(int i=1;i<nums.size();i++){
            int currSum=prev+sum-(nums.size())*nums[nums.size()-i];
            max_val=max(currSum,max_val);
            prev=currSum;
        }
        return max_val;    
    }
};
