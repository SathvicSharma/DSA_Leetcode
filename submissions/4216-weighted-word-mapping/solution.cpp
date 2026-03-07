class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int w_sum,index,rev_w;
        string s;
        char ch;
        for(int i=0;i<words.size();i++)
        {
            w_sum=0;
            for(int j=0;j<words[i].size();j++)
            {
                index=words[i][j]-'a';
                w_sum+=weights[index];
            }
            rev_w=w_sum%26;
            ch='z'-rev_w;
            s.push_back(ch);
        }
        return s;
    }
};
