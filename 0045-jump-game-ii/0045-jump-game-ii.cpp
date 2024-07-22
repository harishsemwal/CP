class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int result = INT_MAX;
        for(int i = 0; i < n; i++){
            if(result < i){
                return result;
            }
            result = min(result, i + nums[i]);
        }
        return result;
    }
};