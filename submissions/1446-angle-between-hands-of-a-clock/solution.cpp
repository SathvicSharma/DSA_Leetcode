class Solution {
public:
    double angleClock(int hour, int minutes) {
        double ang1=(hour%12)*30+double(minutes)/2;
        double ang2=30*minutes/5;
        double ang=abs(ang1-ang2);
        return min(ang,360-ang);
    }
};
