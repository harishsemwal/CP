class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }
        int mini = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            mini = min(mini, nums[i]);
        }
        return (sum - (mini * nums.size()));
    }
};