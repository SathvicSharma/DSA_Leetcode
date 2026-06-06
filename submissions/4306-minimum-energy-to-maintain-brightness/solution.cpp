class Solution {
public:
    long long minEnergy(int n, int brightness, vector<vector<int>>& intervals) {
        vector<int>bulbs(n,0);
        int i=1,count=0;
        int bulbsNeeded = (brightness + 2) / 3;
        intervals=merge(intervals);
        long long cost=0;
        for(int i=0;i<intervals.size();i++)
        {
            cost+=(long long)(intervals[i][1]-intervals[i][0]+1)*(long long)bulbsNeeded;     
        }
        return cost;
        
    }


    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        ans.push_back(intervals[0]);
        for(int i = 1; i < intervals.size(); i++) 
        {
            if(intervals[i][0] <= ans.back()[1])
                ans.back()[1] = max(ans.back()[1], intervals[i][1]); 
            else
                ans.push_back(intervals[i]);
        }
        return ans;
    }
};
