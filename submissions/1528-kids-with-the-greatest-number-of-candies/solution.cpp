class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candy=0,n=candies.size();
        for(int i=0;i<n;i++)
        {
            if(candies[i]>max_candy) 
                max_candy=candies[i];
        }
        vector<bool>ans;
        for(int i=0;i<n;i++)
        {
            if(candies[i]+extraCandies>=max_candy)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};
