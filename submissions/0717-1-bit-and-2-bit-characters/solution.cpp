class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size();
        for(int i=0;i<n;i++)
        {
            if(bits[i]==1)
            {
                ++i;
                continue;
            }
            if(i==n-1)
            {
                return true;
            }
        }
        return false;
    }
    /*1010-V F
      1110-V F
      0110-V T
      0010-V T*/
};
