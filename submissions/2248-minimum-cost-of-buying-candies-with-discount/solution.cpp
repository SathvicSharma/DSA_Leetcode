class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int sum=0,point=0;
        for(int i=cost.size()-1;i>=0;i--)
        {
            point++;
            sum+=cost[i];
            if(point%3==0)
                sum-=cost[i];
        }
        return sum;
    }
};
