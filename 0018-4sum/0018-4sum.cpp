//Optimized Approach using two pointer - O(n^3) time and O(n) space
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> result;
        set<vector<int>> st;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int k = j + 1;
                int l = n - 1;
                while(k < l){
                    long long int sum = nums[i] + nums[j] + nums[k] + nums[l];
                    if(sum < target){
                        k++;
                    }
                    else if(sum > target){
                        l--;
                    }
                    else{
                        st.insert({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                    }
                }
            }
        }
        for(auto x: st){
            result.push_back(x);
        }
        return result;
    }
};