class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string, vector<string>> mp;
        for(auto x: strs){
            string s = x;
            sort(s.begin(), s.end());
            mp[s].push_back(x);
        }
        // above shorted order store
        for(auto y: mp){
            ans.push_back(y.second);
        }
        return ans;
    }
};