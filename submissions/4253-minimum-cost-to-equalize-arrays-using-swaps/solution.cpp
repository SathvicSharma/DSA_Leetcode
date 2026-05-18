class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> diff;
        for(int x : nums1)
            diff[x]++;
        for(int x : nums2)
            diff[x]--;
        int ans = 0;
        for(auto &it : diff)
        {
            if(abs(it.second) % 2 != 0)
                return -1;
            if(it.second > 0)
                ans += it.second / 2;
        }
        return ans;
    }
};
