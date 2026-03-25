class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        long rsum=0,csum=0,tsum=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                tsum+=grid[i][j];
            }
        }
        if(tsum%2!=0)
            return false;
        for(int i=0;i<m-1;i++)
        {
            for(int j=0;j<n;j++)
            {
                rsum+=grid[i][j];
            }
            if(rsum==(tsum/2))
                return true;
        }
        for(int j=0;j<n-1;j++)
        {
            for(int i=0;i<m;i++)
            {
                csum+=grid[i][j];
            }
            if(csum==(tsum/2))
                return true;
        }
        return false;
    }
};
