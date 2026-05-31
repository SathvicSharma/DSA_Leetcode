class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.
        begin(), asteroids.end());
        long long nmass=mass;
        
        for(int i=0;i<asteroids.size();i++)
        {
            if(nmass>=asteroids[i])
            {
                nmass+=asteroids[i];
            }
            else
                   return false;
        }
        return true;
    }
};
