class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(), tasks.end(),
    [](vector<int>& a, vector<int>& b) {
        return (a[1]-a[0])>(b[1]-b[0]);
    });
        int ans=0,curr_energy=0;
        for(int i=0;i<tasks.size();i++)
        {
            if(curr_energy<tasks[i][1])
            {
                ans+=tasks[i][1]-curr_energy;
                curr_energy=tasks[i][1];
            }
            curr_energy=curr_energy-tasks[i][0];
            
        }
        return ans;

    }
};
