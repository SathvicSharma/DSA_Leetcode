class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int cur_alt=0,max_alt=0;
        for(int i=0;i<gain.size();i++)
        {
            cur_alt+=gain[i];
            max_alt=max(cur_alt,max_alt);
        }
        return max_alt;
    }
};
