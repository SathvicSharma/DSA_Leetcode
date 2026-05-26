class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>mp;
        int count=0;
        char low,high;
        for(char ch:word)
            mp[ch]++;
        for(char ch:word)
        {
            high=toupper(ch);
            low=tolower(ch);
            if(mp[high]>0&&mp[low]>0)
            {
                count++;
                mp[high]=0;
                mp[low]=0;
            }
        }
        return count;
    }
};
