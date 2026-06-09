class Solution {
public:
    int maxDepth(string s) {
        int max_val=0;
        int cur=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                cur++;
                max_val=max(max_val,cur);
            }
            if(s[i]==')')
                cur--;

        }
        return max_val;
        
    }
};
