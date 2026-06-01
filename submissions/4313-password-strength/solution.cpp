class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char>st;
        for(int i=0;i<password.size();i++)
            st.insert(password[i]);
        int strength=0;
        for(auto &it:st)
        {
            if(isalnum(it))
            {
                if(isdigit(it))
                {
                    strength+=3;
                }
                else
                {
                    if(isupper(it))
                        strength+=2;
                    else   
                        strength+=1;
                }

            }
            else
            {
                strength+=5;
            }
        }
        return strength;
    }
};
