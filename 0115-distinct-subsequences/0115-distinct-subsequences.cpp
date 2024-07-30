class Solution {
public:
    int solve(string s, int m, string t, int n, vector<vector<int>>& vt){
        if(vt[m][n] != -1){
            return vt[m][n];
        }
        if(n == 0){
            return vt[m][n] = 1;
        }
        if(m == 0){
            return vt[m][n] = 0;
        }
        if(s[m-1] == t[n-1]){
            return vt[m][n] = solve(s, m-1, t, n-1, vt) + solve(s, m-1, t, n, vt);
        } else {
            return vt[m][n] = solve(s, m-1, t, n, vt);
        }
    }

    int numDistinct(string s, string t) {
        int m = s.size();
        int n = t.size();

        vector<vector<int>> vt(m+1, vector<int>(n+1, -1));

        return solve(s, m, t, n, vt); 
    }
};
