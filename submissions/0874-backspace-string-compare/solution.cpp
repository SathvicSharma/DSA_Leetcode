class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return build(s) == build(t);
    }

    string build(string str) {
        string result = "";
        for(char c : str) 
        {
            if(c == '#') 
            {
                if(!result.empty())
                    result.pop_back();
            }
             else 
            {
                result.push_back(c);
            }
        }
        return result;
    }
};

