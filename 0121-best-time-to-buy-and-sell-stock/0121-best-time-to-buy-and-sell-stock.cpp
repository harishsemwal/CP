class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int low = prices[0];
        int profit = 0;
        for(int i = 0 ; i < n; i++){
            int diff = prices[i] - low;
            profit = max(profit, diff);
            low = min(low, prices[i]);
        }
        return profit;
    }
};