class Solution {
public:
    long long countVowels(string word) {
        long long count=0;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
                count+=(long long)((i+1)*(word.size()-i));
        }
        return count;
    }
};
