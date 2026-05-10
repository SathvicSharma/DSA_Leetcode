class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int counter=0,score=0,val;
        for(int i=0;i<events.size()&&counter<10;i++)
        {   
            if(events[i]=="W")
                counter++;
            else if(events[i]=="WD"||events[i]=="NB")
                score++;
            else
            {
                val=stoi(events[i]);
                score+=val;
            }
        }
        return {score,counter};
    }
};
