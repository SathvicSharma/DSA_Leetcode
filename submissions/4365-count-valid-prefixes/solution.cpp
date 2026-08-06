class Solution {
public:
    int countValidPrefixes(string s) {
        int one_count=0,zero_count=0;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
                one_count++;
            else
                zero_count++;
            if(abs(one_count-zero_count)<=1)
                count++;
        }
        return count;
    }
};
