class Solution {
public:
    bool isPalindrome(string s) {
        string rev="";
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
                rev+=tolower(s[i]);
        }
        int left=0,right=rev.size()-1;
        while(left<=right)
        {
            if(rev[left]!=rev[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};

