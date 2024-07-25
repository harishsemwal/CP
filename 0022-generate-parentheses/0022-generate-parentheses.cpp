class Solution {
public:
    void solve(string current, int o, int c, vector<string> &result, int n){
        if(current.size() == 2*n){
            result.push_back(current);
            return;
        }
        if(o < n){
            solve(current+"(", o+1, c, result, n);
        }
        if(c < o)
        {
            solve(current+")", o, c+1, result, n);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        solve("(", 1, 0, result, n);
        return result;
    }
};