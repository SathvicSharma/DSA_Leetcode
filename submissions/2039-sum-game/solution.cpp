class Solution {
public:
    bool sumGame(string num) {
        int sumL=0,sumR=0,cntL=0,cntR=0;
        for(int i=0;i<num.size();i++) 
        {
            if (num[i]=='?') 
            {
                if (i<num.size()/2)
                    cntL++;
                else
                    cntR++;
            } 
            else
            {
                if (i<num.size()/2)
                    sumL+=num[i]-'0';
                else 
                    sumR+=num[i]-'0';
            }
        }

        int totalQ=cntL+cntR;
        if (totalQ%2==1) 
            return true;

        int diff=sumL-sumR;
        return diff!=(cntR-cntL)*9/2;
    }
};

