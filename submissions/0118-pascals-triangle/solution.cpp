class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++)
        {
            ans.push_back(generateRows(i));
        }
        return ans;
    }

    vector<int>generateRows(int row)
    {
        long long ans=1;
        vector<int>genRows;
        genRows.push_back(1);

        for(int i=1;i<row;i++)
        {
            ans*=row-i;
            ans/=i;
            genRows.push_back(ans);
        }
        return genRows;
    }
};

