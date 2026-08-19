class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        sort(reservedSeats.begin(),reservedSeats.end());
        int ans=0;
        int reserved=0;
        int i=0;
        while(i<reservedSeats.size())
        {
            int row=reservedSeats[i][0];
            reserved++;
            bool left=true;
            bool middle=true;
            bool right=true;
            while(i<reservedSeats.size()&&reservedSeats[i][0]==row)
            {
                int seat=reservedSeats[i][1];
                if(seat>=2&&seat<=5)
                    left=false;
                if(seat>=4&&seat<=7)
                    middle=false;
                if(seat>=6&&seat<=9)
                    right=false;
                i++;
            }
            if(left&&middle&&right)
                ans+=2;
            else if (left||middle||right)
                ans++;
        }
        ans+=(n-reserved)*2;
        return ans;
    }
};
