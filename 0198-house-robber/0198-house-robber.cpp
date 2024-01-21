class Solution {
private:
    int robFrom(vector<int>& nums, int index,  vector<int> &dp){
        if(index >= nums.size()){
            return 0;
        }
        if(dp[index] != -1){
            return dp[index];
        }
        int stealCurrent = nums[index] + robFrom(nums, index + 2, dp);
        int skipCurrent = robFrom(nums, index + 1, dp);
        return dp[index] = max(stealCurrent, skipCurrent);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return robFrom(nums, 0, dp);
    }
};