class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>ans;
        int count;
        for(int i=0;i<queries.size();i++)
        {
           string x=queries[i];
           for(int j=0;j<dictionary.size();j++)
           {
                int k=0,l=0;
                count=0;
                while(l<dictionary[j].size()&&k<x.size())
                {
                    if(dictionary[j][l]!=x[k])
                        count++;
                    l++;
                    k++;
                }
                if(count<=2)
                {
                    ans.push_back(x); 
                    break;
                }              
           }
             
        }
        return ans;
    }
};
