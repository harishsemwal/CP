class Solution {
public:
int val[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        int res[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                res[i][j] = board[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int count = 0;
                for(auto x: val){
                    int row = i + x[0];
                    int col = j + x[1];

                    if(row >= 0 && row < n && col >= 0 && col < m && board[row][col] == 1){
                        count++;
                    }
                }
                if(board[i][j] == 1){
                    if(count < 2 || count > 3){
                        res[i][j] = 0;
                    }
                }
                else{
                    if(count == 3){
                        res[i][j] = 1;
                    }
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                board[i][j] = res[i][j];
            }
        }
    }
};