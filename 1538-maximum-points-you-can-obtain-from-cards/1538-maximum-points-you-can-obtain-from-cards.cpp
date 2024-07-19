class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int i = 0;
        int sum = 0;
        while(i < k){
            sum = sum + nums[i];
            i++;
        }
        int result = sum;
        int n = nums.size();
        
        for(int i = 0; i < k; i++){
            sum = sum - nums[k - 1 - i] + nums[n - 1 - i];
            result = max(result, sum);
        }
        return result;
    }
};