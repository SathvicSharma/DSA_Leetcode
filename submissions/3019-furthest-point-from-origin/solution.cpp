class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int L_count=0,R_count=0,dash=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='L')
                L_count++;
            else if(moves[i]=='R')
                R_count++;
            else
                dash++;
        }
        if(L_count>R_count)
            L_count+=dash;
        else
            R_count+=dash;
        return abs(L_count-R_count);
    }
};
