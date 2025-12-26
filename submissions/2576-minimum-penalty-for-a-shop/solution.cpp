class Solution {
public:
    int bestClosingTime(string customers) {
        int time=0,i=0,j=0,count_Y=0;
        while(j<customers.size())
        {
            if(customers[j]=='Y')
                count_Y++;
            j++;
        }
        int min_pen=count_Y,pos=0,pen_calc=count_Y;
        while(i<customers.size())
        {
            if(customers[i]=='Y')
            {
                pen_calc-=1;
                
            }
            else
            {
                pen_calc+=1;
            }
            if(pen_calc<min_pen)
                {
                    min_pen=pen_calc;
                    pos=i+1;
                }
            i++;
        }
        return pos;
    }
};
