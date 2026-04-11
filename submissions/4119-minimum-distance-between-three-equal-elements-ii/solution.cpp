class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;

        // store indices directly
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }

        int min_dist = INT_MAX;

        for(auto &it : mp) {
            vector<int>& indices = it.second;

            if(indices.size() < 3) continue;

            // sliding window of size 3
            for(int k = 0; k + 2 < indices.size(); k++) {
                int cur_dist = 2 * (indices[k+2] - indices[k]);
                min_dist = min(min_dist, cur_dist);
            }
        }

        return (min_dist == INT_MAX) ? -1 : min_dist;
    }
};
