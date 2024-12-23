class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*
        Time - O(N^2)
        Space - O(1)

        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {-1};
        */

        int n = nums.size();
        unordered_map<int, int> mp;
        // find complement
        for(int i = 0; i < n; i++){
            int complement = target - nums[i];
            if(mp.count(complement)){
                return {mp[complement], i};
            }
            mp[nums[i]] = i;
        }
        return {};


        /*
        Map-:
        complement = 2
        key  value target = 9
        2       1  = > return {0, 1}
        7       1
        
        */
    }
};