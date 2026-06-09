class Solution {
public:
    string frequencySort(string s) {
    unordered_map<char,int>mp;
    for(int i=0;i<s.size();i++)
        mp[s[i]]++;
    vector<pair<char,int>>ans;
    for(auto &it:mp)
        ans.push_back({it.first,it.second});
    sort(ans.begin(),ans.end(),
    [](auto &a, auto &b)
    {
        return a.second > b.second;
    });
    string fin="";
    for(int i=0;i<ans.size();i++)
    {
        fin+=string(ans[i].second, ans[i].first);
    }
    return fin;
    }
};
