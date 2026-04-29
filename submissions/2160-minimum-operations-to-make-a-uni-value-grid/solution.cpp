class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>val;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                val.push_back(grid[i][j]);
            }
        }
        int rem=val[0]%x;
        for(int i=0;i<val.size();i++)
        {
            if(val[i]%x!=rem)
                return -1;
        }
        sort(val.begin(),val.end());
        int med=val[val.size()/2];
        int op=0;
        for(int i=0;i<val.size();i++)
        {
            op+=abs((val[i]-med))/x;
        }
        return op;
    }
};
