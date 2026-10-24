class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int alice_month_arr=stoi(arriveAlice.substr(0,2));
        int alice_day_arr=stoi(arriveAlice.substr(3,2));
        int alice_month_leav=stoi(leaveAlice.substr(0,2));
        int alice_day_leav=stoi(leaveAlice.substr(3,2));

        int bob_month_arr=stoi(arriveBob.substr(0,2));
        int bob_day_arr=stoi(arriveBob.substr(3,2));
        int bob_month_leav=stoi(leaveBob.substr(0,2));
        int bob_day_leav=stoi(leaveBob.substr(3,2));
        int month=min(alice_month_arr,bob_month_arr);
        int last_month=max(alice_month_leav,bob_month_leav);
        vector<int>day_count={31,28,31,30,31,30,31,31,30,31,30,31};
        int total=0;
        for(;month<=last_month;month++)
        {
            for(int days=1;days<=day_count[month-1];days++)
            {
                if ((month>alice_month_arr||(month==alice_month_arr&&days >=alice_day_arr))&&(month<alice_month_leav||(month==alice_month_leav&&days<=alice_day_leav))) 
                {

                    if((month>bob_month_arr||(month==bob_month_arr&&days>=bob_day_arr))&&(month < bob_month_leav||(month==bob_month_leav&&days<=bob_day_leav)))
                        total++;
                }
            }
        }
        return total;
    }
};
