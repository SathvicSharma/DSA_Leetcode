class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int count=0,small=abs(matrix[0][0]),flag=0;
        long sum=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]<0)
                    count++;
                sum+=abs(matrix[i][j]);
                if(abs(matrix[i][j])<small)
                {
                    small=abs(matrix[i][j]);
                }

            }
        }
        if(count%2==0)
        {
            return sum;
        }
        else
        {
            return sum-(2*abs(small));

        }
    }
};
