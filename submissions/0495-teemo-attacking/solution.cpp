class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int poison_count=0;
        for(int i=0;i<timeSeries.size();i++)
        {
            if(i==timeSeries.size()-1)
            {
                poison_count+=duration;
                break;
            }
            if(duration+timeSeries[i]>=timeSeries[i+1])
                poison_count+=timeSeries[i+1]-timeSeries[i];
            else
                poison_count+=duration;         
        }
        return poison_count;
    }
};
