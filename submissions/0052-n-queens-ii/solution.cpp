class Solution {
public:
int count=0;
    int totalNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        solve(board,0,n);
        return count;
        
    }
    void solve(vector<string>&board,int col,int n)
    {
        if(col>=n)
        {
            count++;
            return;
        }
        for(int row=0;row<n;row++)
        {
            if(isSafe(board,row,col,n))
            {
                board[row][col]='Q';
                solve(board,col+1,n);
                board[row][col]='.';              
            }           
        }
        return;
    }
    bool isSafe(vector<string>&board,int row,int col,int n)
    {
        for(int i=0;i<=col;i++)
        {
            if(board[row][i]=='Q')
                return false;
        }
        for(int i=row,j=col;i>=0&&j>=0;i--,j--)
        {
            if(board[i][j]=='Q')
                return false;
        }
        for(int i=row,j=col;i<n&&j>=0;i++,j--   )
        {
            if(board[i][j]=='Q')
                return false;
        }
        return true;
    }

};
