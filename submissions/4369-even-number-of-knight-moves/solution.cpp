class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int col1,col2;
        col1=(start[0]+start[1])%2;
        col2=(target[0]+target[1])%2;
        if(col1==col2)
            return true;
        else
            return false;
    }
};
