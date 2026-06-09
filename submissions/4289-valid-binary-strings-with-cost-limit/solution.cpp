class Solution {
public:
    vector<string>ans;
    vector<string> generateValidStrings(int n, int k) {
        vector<string>final;
        string curr="";
        generate(curr,n);
        for(int i=0;i<ans.size();i++)
        {
            if(!checkCons(ans[i]))
                continue;
            int cost=calCost(ans[i]);
            if(cost<=k)
                final.push_back(ans[i]);
        }
        return final;
        
    }

    void generate(string curr,int n)
    {
        if(curr.size()==n)
        {
            ans.push_back(curr);
            return;
        }
        generate(curr+'0',n);
        generate(curr+'1',n);
        return;
    }

    int calCost(string s)
    {
        int val=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
                val+=i;   
        }
        return val;
    }

    bool checkCons(string s)
    {
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='1'&&s[i+1]=='1')
                return false;
        }
        return true;
    }
};
