class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        vector<pair<int,int>>i1,i2;
        for(int i=0;i<img1.size();i++)
        {
            for(int j=0;j<img1[i].size();j++)
            {
                if(img1[i][j]==1)
                    i1.push_back({i,j});
                if(img2[i][j]==1)
                    i2.push_back({i,j});
            }
        }
        vector<vector<int>>cnt(2*img1.size(),vector<int>(2*img1.size(),0));
        int best=0;
         for (auto &a:i1)
        {
            for(auto &b:i2)
            {
                int dx=b.first-a.first+img1.size();
                int dy=b.second-a.second+img1.size();
                best=max(best,++cnt[dx][dy]);
            }
        }
        return best;

    }
};
