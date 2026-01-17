class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        int man_dist;
        int fin_quality=-1;
        vector<int>ans;
        for(int i=0;i<towers.size();i++)
        {
            man_dist=abs(towers[i][0]-center[0])+abs(towers[i][1]-center[1]);
             if(man_dist<=radius)
             {
                 if(towers[i][2]>fin_quality)
                 {
                     fin_quality=towers[i][2];
                     ans=towers[i];
                 }
                 else if(towers[i][2]==fin_quality)
                 {
                     if (towers[i][0] < ans[0] ||(towers[i][0] == ans[0] && towers[i][1] < ans[1]))
                    {
                        ans = towers[i];
                    }

                 }
                 else
                     continue;
             }
        }
        if(ans.empty())
            return {-1,-1};       
        return {ans[0],ans[1]};
        
        
    }
};
