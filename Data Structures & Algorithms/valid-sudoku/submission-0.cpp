class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row=0;row<9;row++){
            unordered_set<char> seen;
            for(int i=0;i<9;i++){
                if(seen.count(board[row][i])) return false;
                if(board[row][i]=='.') continue;
                seen.insert(board[row][i]);
            }
        }
        for(int cols=0;cols<9;cols++){
            unordered_set<char> seen;
            for(int i=0;i<9;i++){
                if(board[i][cols]=='.') continue;
                if(seen.count(board[i][cols])) return false;
                seen.insert(board[i][cols]);
            }
        }
        for (int square = 0; square < 9; square++) {
            unordered_set<char> seen;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int row = (square / 3) * 3 + i;
                    int col = (square % 3) * 3 + j;
                    if (board[row][col] == '.') continue;
                    if (seen.count(board[row][col])) return false;
                    seen.insert(board[row][col]);
                }
            }
        }
        return true;
    }
};
