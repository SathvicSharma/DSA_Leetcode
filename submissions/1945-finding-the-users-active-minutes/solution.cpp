class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int, unordered_set<int>> mp;
        for (auto &log:logs){
            mp[log[0]].insert(log[1]);
        }
        vector<int> ans(k, 0);
        for (auto &p:mp) {
            int uam=p.second.size();
            ans[uam-1]++;
        }
        return ans;
    }
};
