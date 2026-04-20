class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i,j=colors.size()-1,max_dist=INT_MIN;
        for(i=0;i<colors.size();i++)
        {
            if(colors[i]!=colors[j])
            {
                max_dist=max(max_dist,abs(i-j));
                break;
            }
        }
        i=0;
        for(j=colors.size()-1;j>=0;j--)
        {
            if(colors[i]!=colors[j])
            {
                max_dist=max(max_dist,abs(i-j));
                break;
            }
        }
        return max_dist;
    }
};
