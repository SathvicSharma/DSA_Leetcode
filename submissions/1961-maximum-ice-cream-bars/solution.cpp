class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int max_ele=INT_MIN;
        for(int i=0;i<costs.size();i++)
            max_ele=max(max_ele,costs[i]);
        vector<int>count(max_ele+1,0);
        for(int i=0;i<costs.size();i++)
            count[costs[i]]++;
        int i=0,j=0;
        while(j<count.size())
        {
            if(count[j]!=0)
            {
                count[j]--;
                costs[i]=j;
                i++;
            }
            else
            {
                j++;
            }
        }
        int val=0;
        int amt=coins;

        for(int i=0;i<costs.size();i++)
        {
            if(amt>=costs[i])
            {
                val++;
                amt-=costs[i];
            }
            else
            {
                return val;
            }
        }
        return val;
    }
};
