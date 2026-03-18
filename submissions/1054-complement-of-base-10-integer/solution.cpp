class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
            return 1;
        int power=log2(n)+1;
        return pow(2,power)-n-1;

    }
};
