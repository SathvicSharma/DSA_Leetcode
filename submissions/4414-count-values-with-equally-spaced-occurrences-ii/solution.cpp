class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,pair<int,vector<int>>>freq;
        for(int i=0;i<nums.size();i++)
            {
                freq[nums[i]].first++;
                freq[nums[i]].second.push_back(i);
            }
        int count=0;
        for(auto &it:freq)
        {
            if(it.second.first>=3)
            {
                int flag=1;
                int cons=it.second.second[1]-it.second.second[0];
                for(int i=1;i<it.second.second.size();i++)
                {
                    if(it.second.second[i]-it.second.second[i-1]!=cons)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag)
                    count++;
            }
        }
        return count;
    }
};
