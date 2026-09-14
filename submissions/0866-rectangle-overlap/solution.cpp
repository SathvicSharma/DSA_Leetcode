class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int com_left=max(rec1[0],rec2[0]);
        int com_right=min(rec1[2],rec2[2]);
        int com_bot=max(rec1[1],rec2[1]);
        int com_top=min(rec1[3],rec2[3]);

        if(com_left<com_right&&com_bot<com_top)
            return true;
        return false;
    }
};
