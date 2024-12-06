class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = -1, sum = 0;
        int size = accounts[0].size();
        for(int i = 0; i < accounts.size(); i++)
        {
            for(int j = 0; j < size; j++)
            {
                sum = sum + accounts[i][j];
            }
            ans = max(ans, sum);
            sum = 0;
        }
        
        return ans;
    }
};