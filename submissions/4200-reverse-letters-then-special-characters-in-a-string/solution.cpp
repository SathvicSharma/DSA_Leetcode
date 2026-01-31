class Solution {
public:
    string reverseByType(string s) {
        string ans;
        vector<char>letters;
        vector<char>special;
        char ch;
        for(int i=0;i<s.size();i++)
            {
                if(isalnum(s[i]))
                    letters.push_back(s[i]);
                else
                    special.push_back(s[i]);
            }
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
            {
                ch=letters.back();
                ans.push_back(ch);
                letters.pop_back();
            }
            else
            {
                ch=special.back();
                ans.push_back(ch);
                special.pop_back();
            }
        }
        return ans;
    }
};
