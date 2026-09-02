class Solution {
public:
    vector<string>res;
    vector<string> generateParenthesis(int n) {
        backtrack("",0,0,n);
        return res;
    }
    void backtrack(string curr,int open,int closed,int n)
    {
        if(curr.size()==2*n)
            res.push_back(curr);
        if(open<n)
            backtrack(curr+"(",open+1,closed,n);
        if(closed<open)
            backtrack(curr+")",open,closed+1,n);
    }
};
