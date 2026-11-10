class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int val=0;
        int left=0,right=0;
        while(left<word1.size()&&right<word2.size())
        {
            if(val==0)
            {
                ans+=word1[left];
                left++;
                val=1;
            }
            if(val==1)
            {
                ans+=word2[right];
                right++;
                val=0;
            }
        }
        while(left<word1.size())
        {
            ans+=word1[left];
            left++;
        }
        while(right<word2.size())
        {
            ans+=word2[right];
            right++;
        }
        return ans;
    }
};
