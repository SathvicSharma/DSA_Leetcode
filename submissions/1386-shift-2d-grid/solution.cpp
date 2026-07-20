class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int>val;
        int m=grid.size();
        int n=grid[0].size();
        k%=(m*n);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                val.push_back(grid[i][j]);
        }
  
            reverse(val.begin(),val.end());
            reverse(val.begin(),val.begin()+k);
            reverse(val.begin()+k,val.end());           
        int p=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                grid[i][j]=val[p++];
            }
        }
        return grid;
    }
};
