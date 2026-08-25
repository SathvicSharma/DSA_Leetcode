class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>ele;
        for(int ch:nums)
            ele[ch]++;
        int cur=k;
        for(auto &it:ele)
        {
            if(ele.find(cur)!=ele.end())
                cur+=k;
            else
                return cur;
        }
        return cur;
    }
};
