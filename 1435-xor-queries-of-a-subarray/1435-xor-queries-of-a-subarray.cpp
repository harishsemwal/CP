class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        int m = queries.size();
        for(int i = 0; i < m; i++){
            int u = queries[i][0];
            int v = queries[i][1];

            int value = arr[u];
            for(int i = u + 1; i <= v; i++){
                value = value ^ arr[i];
            }
            ans.push_back(value);
        }
        return ans;
    }
};