class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        if(n==2||n==1||n==0)
            return 0;
        

    vector<int> arr(n+1, 1);
    arr[0] = arr[1] = 0;  // 0 and 1 are not prime

    for (int i = 2; i * i <= n; i++) {
        if (arr[i]) {
            for (int j = i * i; j <= n; j += i) {
                arr[j] = 0;
            }
        }
    }
    for(int i=2;i<n;i++)
        count+=arr[i];
    return count;

    }
};
