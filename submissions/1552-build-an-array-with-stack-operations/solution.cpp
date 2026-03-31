class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        for (int i=1,j=0;i<=n&&j<target.size();i++) {
            ans.push_back("Push");
            if (i == target[j]) {
                j++;
            } else {
                ans.push_back("Pop");
            }
        }

        return ans;
    }
};
