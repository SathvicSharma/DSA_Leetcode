class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int>freq(26,0);
        int left=0,right=0;
        int max_length=2,cur_length=0;
        while(left<=right&&right<s.size())
        {
            if(freq[s[right]-'a']<2)
            {
                freq[s[right]-'a']++;
                right++;
                max_length=max(max_length,right-left);
            }
            else
            {
                while(freq[s[right]-'a']>=2)
                {
                    freq[s[left]-'a']--;
                    left++;
                }
            }
        }
        return max_length;
    }
};
