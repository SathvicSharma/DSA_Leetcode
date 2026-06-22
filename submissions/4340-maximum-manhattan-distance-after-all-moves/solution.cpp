class Solution {
public:
    int maxDistance(string moves) {
        int dash_count=0,u_count=0,l_count=0,r_count=0,d_count=0;
        for(char ch:moves)
        {
            if(ch=='D')
                d_count++;
            else if(ch=='U')
                u_count++;
            else if(ch=='L')
                l_count++;
            else if(ch=='R')
                r_count++;
            else
                dash_count++;
        }
        return (abs(l_count-r_count)+abs(u_count-d_count)+dash_count);

    }
};
