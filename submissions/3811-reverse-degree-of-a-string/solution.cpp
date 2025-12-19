class Solution {
public:
    int reverseDegree(string s) {
        int sum=0,n=s.size();
        for(int i=0;i<n;i++)
        {
            sum+=((96-s[i])+27)*(i+1);
        }
        return sum;
    }
};
