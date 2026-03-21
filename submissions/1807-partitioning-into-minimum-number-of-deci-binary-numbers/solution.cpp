class Solution {
public:
    int minPartitions(string n) {
        int maxDigit=0;
        for(int i=0;i<n.size();i++)
        {
            maxDigit=max(maxDigit,n[i]-'0');
            if(maxDigit==9)
                return 9;
        }
        return maxDigit;
    }
};
