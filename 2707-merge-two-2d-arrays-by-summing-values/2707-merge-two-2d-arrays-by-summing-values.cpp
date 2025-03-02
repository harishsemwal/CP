class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        map<int, int> mp;
        for(auto x: nums1){
            mp[x[0]] += x[1];
        }
        
        for(auto x: nums2){
            mp[x[0]] += x[1];
        }

        vector<vector<int>> res;
        for(auto x: mp){
            res.push_back({x.first, x.second});
        }

        return res;
    }
};