class Solution {
public:
    bool winnerOfGame(string colors) {
        int movesA = 0, movesB = 0;
        int n = colors.size();

        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && colors[j] == colors[i]) {
                j++;
            }

            int len = j - i;
            if (len >= 3) {
                if (colors[i] == 'A')
                    movesA += len - 2;
                else
                    movesB += len - 2;
            }

            i = j;
        }

        return movesA > movesB;
    }
};

