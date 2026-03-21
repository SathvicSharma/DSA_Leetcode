class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }
        vector<vector<int>> ans;
        while (true) {
            vector<int> row;
            
            for (auto &p : freq) {
                if (p.second > 0) {
                    row.push_back(p.first);
                    p.second--;
                }
            }
            if (row.empty()) 
                break;
            ans.push_back(row);
        }
        return ans;
    }
};
