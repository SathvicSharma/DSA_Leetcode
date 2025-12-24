class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end());
        int apple_tot=0,count=0,total_cap=0;
        for(int i=0;i<apple.size();i++)
        {
            apple_tot+=apple[i];
        }
        for(int i=capacity.size()-1;i>=0;i--)
        {
            total_cap+=capacity[i];
            count++;
            if(total_cap>=apple_tot)
            {
                return count;
            }
            
        }
        return count;
    }
};
