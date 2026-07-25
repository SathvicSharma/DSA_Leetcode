class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        int count=0;
        for(char ch:s)
        {
            if(st.empty()||ch!=st.top().first)
            {
                st.push({ch,1});
            }
            else
            {
                st.top().second++;
                if(st.top().second==k)
                    st.pop();
            }
        }
        string ans;
        while(!st.empty())
        {
            ans=string(st.top().second,st.top().first)+ans;
            st.pop();
        }
        return ans;
    }
};
