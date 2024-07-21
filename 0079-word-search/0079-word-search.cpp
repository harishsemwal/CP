class Solution {
public:
    bool dfs(vector<vector<char>> &board, string word, int i, int j, int count){
         //base case


        // if word is found completely
        if(count == word.size()){
            return true;
        }

        // return false cases
        int n = board.size();
        int m = board[0].size();
        if(i < 0 || i >= n || j < 0 || j >= m || word[count] != board[i][j]){
            return false;
        }

        // make it visited
        int temp = board[i][j];
        board[i][j] = '*';

        // Make Traversal
        bool isFound = dfs(board, word, i+1, j, count+1) |
                       dfs(board, word, i, j+1, count+1) |
                       dfs(board, word, i-1, j, count+1) |
                       dfs(board, word, i, j-1, count+1);


        // BackTrack
        board[i][j] = temp;

        return isFound;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                // if word[0] matches then
                if(board[i][j] == word[0] && dfs(board, word, i, j, 0)){
                    return true;
                }
            }
        }
        return false;
    }
};