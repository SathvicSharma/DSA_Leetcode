class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
       vector<int>ans,temp;
       for(int i=0;i<nums.size();i++)
       {
            int m=nums[i];
            temp={};
            while(m>0)
            {
                temp.push_back(m%10);
                m/=10;
            }
            reverse(temp.begin(),temp.end());
            ans.insert(ans.end(),temp.begin(),temp.end());
       }
       return ans; 
    }
};
