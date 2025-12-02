class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int per=0;
        int row=grid.size(),col=grid[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==1)
                {
                    per+=4;
                    if((i+1<row&&grid[i+1][j]==1))
                        per-=2;

                    if(j+1<col&&grid[i][j+1]==1)
                        per-=2;
                }
            }
        }
        return per;
    }
};
