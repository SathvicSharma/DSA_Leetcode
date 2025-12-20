class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_count=0,count=0;
        for(int i=0;i<sentences.size();i++)
        {
            string s=sentences[i];
            for(int j=0;j<s.size();j++)
            {
                if(s[j]==' ')
                    count++;
            }
            count++;
            if(count>max_count)
            {
                max_count=count;
            }
            count=0;
        }
        return max_count;
    }
};
