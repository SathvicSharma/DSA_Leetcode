class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int>col;
        vector<int>row;
        for(int i=0;i<matrix.size();i++)
        {
            int minVal=INT_MAX;
            for(int j=0;j<matrix[i].size();j++)
                minVal=min(minVal,matrix[i][j]);
            row.push_back(minVal);
        }
        for(int i=0;i<matrix[0].size();i++)
        {
            int maxVal=INT_MIN;
            for(int j=0;j<matrix.size();j++)
                maxVal=max(maxVal,matrix[j][i]);
            col.push_back(maxVal);
        }
        vector<int>ans;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==row[i]&&matrix[i][j]==col[j])
                    ans.push_back(matrix[i][j]);
            }
        }
        return ans;
    }
};
