class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        for(auto x: nums){
            if(x < pivot){
                ans.push_back(x);
            }
        }
        for(auto y: nums){
            if(y == pivot){
                ans.push_back(y);
            }
        }
        for(auto z: nums){
            if(z > pivot){
                ans.push_back(z);
            }
        }
        return ans;
    }
};