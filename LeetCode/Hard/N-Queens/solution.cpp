class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n, string(n, '.')); 
        vector<int> cols(n, 0), diag1(2*n, 0), diag2(2*n, 0); 
        
        backtrack(0, n, board, result, cols, diag1, diag2);
        return result;
    }

private:
    void backtrack(int row, int n, vector<string>& board, 
                   vector<vector<string>>& result,
                   vector<int>& cols, vector<int>& diag1, vector<int>& diag2) {
        if (row == n) {
            result.push_back(board); 
            return;
        }
        for (int col = 0; col < n; col++) {
            if (cols[col] || diag1[row+col] || diag2[row-col+n]) continue;
           
            board[row][col] = 'Q';
            cols[col] = diag1[row+col] = diag2[row-col+n] = 1;

            backtrack(row+1, n, board, result, cols, diag1, diag2);

         
            board[row][col] = '.';
            cols[col] = diag1[row+col] = diag2[row-col+n] = 0;
        }
    }
};
