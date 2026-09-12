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
            if(it.second.first==3&&it.second.second[1]-it.second.second[0]==it.second.second[2]-it.second.second[1])
                count++;
        }
        return count;
    }
};
