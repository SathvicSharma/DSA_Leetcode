class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int l=0,r=piles.size()-1;
        int sum=0;
        sort(piles.begin(),piles.end());
        while(l<r)
        {
            sum+=piles[r-1];
            l++;
            r-=2;
        }
        return sum;   
    }
};
