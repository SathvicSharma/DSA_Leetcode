class Solution {
public:
    int numberOfSubstrings(string s) {
        int a_count=0,b_count=0,c_count=0;
        int count=0;
        int left=0,right=0;
        while(right<s.size())
        {
            if(s[right]=='a')
                a_count++;
            if(s[right]=='b')
                b_count++;
            if(s[right]=='c')
                c_count++;
            while(a_count>0&&b_count>0&&c_count>0)
            {
                count+=(s.size()-right);
                if(s[left]=='a')
                    a_count--;
                if(s[left]=='b')
                    b_count--;
                if(s[left]=='c')
                    c_count--;
                left++;
            }
            right++;
        }
        return count;
    }
};
