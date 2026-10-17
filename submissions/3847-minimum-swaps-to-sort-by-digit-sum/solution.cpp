class Solution {
public:
    int minSwaps(vector<int>& nums) {
        vector<pair<int,pair<int,int>>>val;
        for(int i=0;i<nums.size();i++)
        {
            int sum=calc_sum(nums[i]);
            val.push_back({sum,{nums[i],i}});
        }
        sort(val.begin(),val.end());
        vector<bool>visited(val.size(),false);
        int swaps=0;
        for (int i=0;i<val.size();i++)
        {
            if (visited[i]||val[i].second.second==i)
                continue;
            int cycleSize=0;
            int j=i;
            while(!visited[j])
            {
                visited[j]=true;
                j=val[j].second.second;
                cycleSize++;
            }
            swaps+=cycleSize-1;
        }
        return swaps;
    }


    int calc_sum(int x)
    {
        int sum=0;
        while(x>0)
        {
            sum+=x%10;
            x/=10;
        }
        return sum;
    }
};
