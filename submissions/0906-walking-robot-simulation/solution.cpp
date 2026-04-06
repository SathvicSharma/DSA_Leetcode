class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
           // store obstacles
        set<pair<int,int>> obs;
        for(auto &o : obstacles) {
            obs.insert({o[0], o[1]});
        }

        int direction=0; // 0=N, 1=E, 2=S, 3=W
        int x = 0,y=0,max_dist=0;

        // direction vectors
        vector<pair<int,int>>dir={
            {0,1},   // N
            {1,0},   // E
            {0,-1},  // S
            {-1,0}   // W
        };
        for(int i=0;i<commands.size();i++) {           
            if(commands[i]==-1) {
                direction=(direction+1)%4;
            }
            else if(commands[i]==-2) {
                direction=(direction+3)%4;
            }
            else {
                for(int step = 0; step < commands[i]; step++) {
                    int nx = x + dir[direction].first;
                    int ny = y + dir[direction].second;
                    if(obs.count({nx, ny})) 
                        break;
                    x = nx;
                    y = ny;
                    max_dist=max(max_dist,x*x+y*y);
                }
            }
        }

        return max_dist;
    }
};
