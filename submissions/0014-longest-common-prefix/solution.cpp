class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string prefix = "";
        int j=0;
        for(int i=0;i<strs[0].size();i++)
        {
            char pref=strs[0][i];
            for(j=0;j<strs.size();j++)
            {
                if(i>=strs[j].size()||pref!=strs[j][i])
                    return prefix;
            }
            prefix+=pref;
        }
        return prefix;
    }
};

