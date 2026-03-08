class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int index=INT_MAX,min_cap=INT_MAX;
        for(int i=0;i<capacity.size();i++)
        {
            if(capacity[i]>=itemSize&&capacity[i]<min_cap)
            {
                min_cap=capacity[i];
                index=i;
            }
        }
        if(index==INT_MAX)
            return -1;
        return index;
    }
};
