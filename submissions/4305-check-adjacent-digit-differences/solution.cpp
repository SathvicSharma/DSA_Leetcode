class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        for(int i=0;i<s.size()-1;i++)
        {
            int dig1=s[i]-'0';
            int dig2=s[i+1]-'0';
            if(abs(dig1-dig2)>2)
                return false;
        }
        return true;
    }
};
