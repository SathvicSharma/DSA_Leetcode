class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1,flag=1,count=0;
        while(i>=0)
        {
            if(isspace(s[i]))
            {
                if(flag==1)
                {
                    i--;
                    continue;
                }
                else
                    break;
            }
            else
            {
                flag=0;
                count++;
            }
            i--;

        }
        return count;
    }
};
