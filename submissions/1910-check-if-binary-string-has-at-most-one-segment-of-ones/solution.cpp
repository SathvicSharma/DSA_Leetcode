class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s.size()<2&&s[0]=='1')
            return true;
        if(s.size()<2&&s[0]=='0')
            return false;

         for(int i=1;i<s.size();i++)
         {
            if(s[i]=='1'&&s[i-1]=='0')
                return false;;
         }
         return true;
    }
};
