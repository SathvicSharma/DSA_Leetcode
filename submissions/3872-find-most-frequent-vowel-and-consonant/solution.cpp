class Solution {
public:
    int maxFreqSum(string s) 
    {
        int maxFreqVowel = 0, maxFreqConsonant = 0;
        unordered_map<char,int> freq;
        for(char ch : s) 
            freq[ch]++;

        for(auto &p : freq) 
        {
            char c = p.first;
            int count = p.second;
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                maxFreqVowel = max(maxFreqVowel, count);
            else
                maxFreqConsonant = max(maxFreqConsonant, count);
        }
        return maxFreqVowel + maxFreqConsonant;
    }
};
