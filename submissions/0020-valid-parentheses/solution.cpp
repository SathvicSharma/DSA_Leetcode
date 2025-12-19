class Solution {
public:
    bool isValid(string s) {
        vector<char>brackets;
        char ch;
        int i=0,top=0;
        while(i<s.size())
        {
            if(s[i]=='['||s[i]=='{'||s[i]=='(')
            {
                brackets.push_back(s[i]);
                top++;
            }
            else
            {
                if(brackets.size()==0)
                    return false;
                ch=brackets.back();
                if((s[i]==')')&&(ch=='('))
                    brackets.pop_back();
                else if((s[i]==']')&&(ch=='['))
                    brackets.pop_back();
                else if((s[i]=='}')&&(ch=='{'))
                    brackets.pop_back();
                else
                    return false;
            }
            i++;
        }
        if(brackets.size()==0)
                return true;
        else
                return false;
    }
};
