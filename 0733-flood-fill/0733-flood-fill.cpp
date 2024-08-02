class Solution {
public:
    void dfs(int row, int col, int newcolor,vector<vector<int>>& image,  int inicolor, vector<vector<int>> &ans, int delrow[], int delcol[]){
        ans[row][col] = newcolor;
        int n = image.size();
        int m = image[0].size();
        for(int i = 0; i < 4; i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == inicolor && ans[nrow][ncol] != newcolor){
                dfs(nrow, ncol, newcolor, image, inicolor, ans, delrow, delcol);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        int n = image.size();
        int m = image[0].size();
        int inicolor = image[sr][sc];
        vector<vector<int>> ans = image;
        int delrow[4] = {-1, 0, 1, 0};
        int delcol[4] = {0, 1, 0, -1};

        dfs(sr, sc, newcolor, image, inicolor, ans, delrow, delcol);
        return ans;
    }
};