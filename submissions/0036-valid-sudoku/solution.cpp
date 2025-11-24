class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {       
        // Check rows
        for (int r = 0; r < 9; r++) 
        {
            unordered_set<char> seen;
            for (int c = 0; c < 9; c++) {
                char val = board[r][c];
                if (val == '.') continue;
                if (seen.count(val)) return false;
                seen.insert(val);
            }
        }

        // Check columns
        for (int c = 0; c < 9; c++) {
            unordered_set<char> seen;
            for (int r = 0; r < 9; r++) {
                char val = board[r][c];
                if (val == '.') continue;
                if (seen.count(val)) return false;
                seen.insert(val);
            }
        }
         for (int box = 0; box < 9; box++) {
            unordered_set<char> seen;

            int rowStart = (box / 3) * 3;
            int colStart = (box % 3) * 3;

            for (int r = rowStart; r < rowStart + 3; r++) 
            {
                for (int c = colStart; c < colStart + 3; c++) 
                {
                    char val = board[r][c];
                    if (val == '.') continue;
                    if (seen.count(val)) return false;
                    seen.insert(val);
                }
            }
        }
       
        return true;
    }
};

