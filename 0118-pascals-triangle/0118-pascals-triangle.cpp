class Solution {
public:
    int nCr(int n, int r){
        int res = 1;
        for(int i = 0; i < r; i++){
            res = res * (n - i);
            res = res / (i + 1);
        }
        return res;
    }
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        for(int row = 1; row <= n; row++){
            vector<int> tempList;
            for(int col = 1; col <= row; col++){
                tempList.push_back(nCr(row-1, col-1));
            }
            ans.push_back(tempList);
        }
        return ans;
    }
};