class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        int sn,sn2,sum=0,square=0;
        for(int ch:nums)
        {
            sum+=ch;
            square+=ch*ch;
 }
 
 sn=(n*(n-1))/2;
 sn+=n-1;
 sn2=(n*(n-1)*(2*n-1))/6;
 sn2+=(n-1)*(n-1);
 if(sn==sum&&sn2==square)
 return true;
 else
 return false;
    }
};
