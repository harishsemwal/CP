class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 1-st approach
        /*
        vector<int> result;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(nums[i]+nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {0, 0};

        // 2nd approach
        sort(nums.begin(), nums.end());
        int i = 0; 
        int n = nums.size();
        ---- :- Thinking -: ----

        */

        // 3rd approach
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            int comp = target - nums[i];
            if(mp.find(comp) != mp.end()){
                return {mp[comp], i};
            }
            mp[nums[i]] = i;
        }
        return {0, 0};
    }
};