class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> ans;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(nums[i] == nums[j]){
                    ans.push_back({i, j});
                }
            }
        }
        return ans.size();
    }
};