class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int sum=0,five_count=0,ten_count=0,twenty_count=0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
                five_count++;
            else if(bills[i]==10)
            {
                if(five_count==0)
                    return false;
                five_count--;
                ten_count++;
            }
            else
            {
                if(five_count==0)
                    return false;
                if(ten_count==0&&five_count>=3)
                {
                    five_count-=3;
                }
                else if(ten_count==0&&five_count<=3)
                    return false;
                else
                {
                    five_count--;
                    ten_count--;
                    twenty_count++;
                }
            }
        }
        return true; 
    }
};
