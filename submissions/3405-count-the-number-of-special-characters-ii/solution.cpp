class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count=0;
        vector<int>lower_index(26,-1);
        vector<int>upper_index(26,-1);
        for(int i=0;i<word.size();i++)
        {
            int ch=word[i];
            if(islower(ch))
            {
                lower_index[ch-'a']=i;
            }
            else
            {
                if(upper_index[ch-'A']==-1)
                    upper_index[ch-'A']=i;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(upper_index[i]!=-1&&lower_index[i]!=-1&&upper_index[i]>lower_index[i])
                count++;
        }
        return count;
    }
};
