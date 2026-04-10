class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        vector<int>tup_list;
        int cur_dist,min_dist=INT_MAX,d1,d2,d3;
        for(auto &it:freq)
        {
            if(it.second>=3)
                tup_list.push_back(it.first);
        }
        if(tup_list.size()==0)
            return -1;
        for(int i = 0; i < tup_list.size(); i++) 
        {           
            vector<int> indices;
            for(int j=0;j<nums.size();j++) 
            {
                if(nums[j]==tup_list[i]) 
                {
                    indices.push_back(j);
                }
            }
            for(int k=0;k+2<indices.size();k++) 
            {
                int d1=indices[k];
                int d2=indices[k+1];
                int d3=indices[k+2];
                int cur_dist=abs(d1-d2)+abs(d2-d3)+abs(d3-d1);
                min_dist=min(min_dist,cur_dist);
            }
        }
        return min_dist;
    }
};
