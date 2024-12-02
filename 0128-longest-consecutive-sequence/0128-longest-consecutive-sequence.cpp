class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int count = 1;
        int longest = nums[0];
        int res = 0;
        for(int i = 1; i < n; i++){
            if(nums[i] == longest + 1){
                longest = nums[i];
                count++;
            }
            // else if(nums[i] == longest){
            //     longest = nums[i];
            // }
            else if(nums[i] != longest){
                res = max(res, count);
                count = 1;
                longest = nums[i];
            }
        }
        res = max(res, count);
        return res;
    }
};