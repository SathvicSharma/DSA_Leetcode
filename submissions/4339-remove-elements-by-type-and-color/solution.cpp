class Solution {
public:
    bool canRemoveAll(vector<int>& types, vector<int>& colors, vector<int>& groupSize) {
        vector<array<int,3>>st;
        for(int i = 0; i < types.size(); i++) 
        {
            int type = types[i];
            int color = colors[i];
            if(!st.empty() &&st.back()[0] == type
                &&st.back()[1] == color)
                st.back()[2]++;
            else
                st.push_back({type, color, 1});
            if(st.back()[2] == groupSize[type]) {
                st.pop_back();
            }
        }
        return st.empty();
    }
};
