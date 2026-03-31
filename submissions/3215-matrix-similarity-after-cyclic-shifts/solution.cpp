class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n=mat[0].size();
        if(k%n==0)
            return true;
        int cycles=k%n;
        for(int i=0;i<mat.size();i++)
        {
            int temp=mat[i][0];
            for(int j=0;j<mat[i].size();j++)
            {
                int newIndex;
                if (i % 2 == 0) {
                    newIndex = (j+cycles) % n;
                }
                 else 
                {
                    newIndex = (j-cycles+n)%n;
                }

                if (mat[i][j]!=mat[i][newIndex]) {
                    return false;
                }
            }
        }
        return true;
    }
};
