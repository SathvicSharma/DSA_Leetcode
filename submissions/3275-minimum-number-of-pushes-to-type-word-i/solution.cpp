class Solution {
public:
    int minimumPushes(string word) {
        int length=word.size();
        int cost=0;
        int i=1,cur_cost=1;
        int count=length/8;
        for(i=1;i<=count;i++)
            cost+=i*8;
        cost+=(length-count*8)*i;
        return cost;
    }
};
