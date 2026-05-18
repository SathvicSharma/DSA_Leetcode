class Solution {
public:
    int countPrimes(int n) {
        if(n==2||n==1)
            return 0;
        if(n==3)
            return 1;
        int count=0;
        vector<int>visited(n+1,1);
        for(int i=2;i*i<n;i++)
        {
            if(visited[i]==1)
            {
                for(int j=i*i;j<n;j+=i)
                {
                    visited[j]=0;
                }
            }
        }
        for(int i=2;i<n;i++)
        {
            if(visited[i]==1)
                count++;
        }
        return count;
    }
};
