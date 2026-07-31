class Solution {
public:
    string mergeCharacters(string s, int k) {
        while(1)
        {
            bool merge=false;
            for(int i=0;i<s.size()&&!merge;i++)
            {
                for(int j=i+1;j<s.size();j++)
                {
                    if(s[i]==s[j]&&j-i<=k)
                    {
                        s.erase(s.begin()+j);
                        merge=true;
                        break;
                    }
                }
            }
            if(!merge)
                break;
        }
        return s;
    }
};
