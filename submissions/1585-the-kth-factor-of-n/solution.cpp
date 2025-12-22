class Solution {
public:
    int kthFactor(int n, int k) {
        int count=0;
        vector<int>factors;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
                factors.push_back(i);
            }
            if(k==count)
                return factors[count-1];
        }
        return -1;
    }
};
