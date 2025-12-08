class Solution {
public:
    bool isValid(string word) {
        bool DigCheck=false,VowCheck=false,ConsCheck=false;
        char vow;
        if(word.size()<3)
            return false;
        for(int i=0;i<word.size();i++)
        {
            if(!isalnum(word[i]))
                return false;

            if(isalpha(word[i]))         
            {
                vow=tolower(word[i]);
                if(vow=='a'||vow=='e'||vow=='i'||vow=='o'||vow=='u')
                    VowCheck=true;
                else 
                    ConsCheck=true;
            }
        }
        if(VowCheck==true&&ConsCheck==true)
            return true;
        else
            return false;
    }
};

