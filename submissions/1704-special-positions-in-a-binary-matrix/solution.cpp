class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int>row_count,col_count;
        int tot_row,tot_col;
        for(int i=0;i<mat.size();i++)
        {
            tot_row=0,tot_col=0;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1)
                    tot_row++;
            }
            row_count.push_back(tot_row);
        }
        for(int i=0;i<mat[0].size();i++)
        {
            tot_col=0;
            for(int j=0;j<mat.size();j++)
            {
                if(mat[j][i]==1)
                    tot_col++;
            }
            col_count.push_back(tot_col);
        }

        int spec_pos=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1&&col_count[j]==1&&row_count[i]==1)
                {
                    spec_pos++;
                }
            }
        }
        return spec_pos;
    }
};
