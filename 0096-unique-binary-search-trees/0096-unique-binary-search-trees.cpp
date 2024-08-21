class Solution {
private:
    int solve(int n, vector<int>&dp){
        if(n<=1){
            return 1;
        }
        int ans = 0;
        if(dp[n] != -1){
            return dp[n];
        }
        //consider all node at a time root node bhaiya
        for(int i = 1; i <= n; i++){
            ans += solve(i-1, dp) * solve(n-i, dp);
        }
        return dp[n] = ans;
    }
public:
    int numTrees(int n) {
        //using Dynamic Programming
        vector<int> dp(n+1, -1);
        return solve(n, dp);
    }
};