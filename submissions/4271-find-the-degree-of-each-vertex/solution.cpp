class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>ans;
        int deg=0;
        for(int i=0;i<matrix.size();i++)
        {
            deg=0;
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==1)
                    deg++;
            }
            ans.push_back(deg);
        }
        return ans;
    }
};
