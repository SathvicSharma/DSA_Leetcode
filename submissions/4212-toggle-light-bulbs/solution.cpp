class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>toggle(100,0);
        for(int i=0;i<bulbs.size();i++)
        {
            toggle[bulbs[i]-1]=1-toggle[bulbs[i]-1];
        }
        vector<int>ans;
        for(int i=0;i<toggle.size();i++)
        {
            if(toggle[i]==1)
                ans.push_back(i+1);
        }
        return ans;
    }
};
