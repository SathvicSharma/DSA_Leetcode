class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        string pal = "";

        for(int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
            {
                int l = i, r = j;
                int flag=0;

                while(l < r)
                {
                    if(s[l] != s[r])
                    {
                        flag=-1;
                        break;
                    }
                    l++; r--;
                }
                if(flag==0&& j - i + 1 > pal.length()){
                    pal = s.substr(i, j - i + 1);
                }
            }
        }

        return pal;
    }
};

