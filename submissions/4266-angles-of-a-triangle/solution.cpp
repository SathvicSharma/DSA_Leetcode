class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        sort(sides.begin(),sides.end());
        if(sides[0]+sides[1]<=sides[2])
            return {};
        vector<double>angles;
        double angle;
        angle=acos((sides[0]*sides[0]+sides[1]*sides[1]-sides[2]*sides[2])/(2.0*sides[0]*sides[1]));
        angles.push_back((angle*180)/M_PI);
        angle=acos((sides[2]*sides[2]+sides[1]*sides[1]-sides[0]*sides[0])/(2.0*sides[2]*sides[1]));
        angles.push_back((angle*180)/M_PI);
        angle=acos((sides[0]*sides[0]+sides[2]*sides[2]-sides[1]*sides[1])/(2.0*sides[0]*sides[2]));
        angles.push_back((angle*180)/M_PI);
        sort(angles.begin(),angles.end());
        return angles;

    }
};
