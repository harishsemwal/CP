class Solution {
private:
     static bool cmp(pair<int,int>&a, pair<int,int>&b) {
        return  (a.first==b.first) ? a.second>b.second : a.first<b.first;
    }
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> ans;
        map<int, int> mp;
        vector<pair<int, int>> vt;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto x: mp){
            vt.push_back({x.second, x.first});
            // vt.push_back(x);
        }
        sort(vt.begin(), vt.end(), cmp);
        for(auto x: vt){
            int val = x.first;
            int num = x.second;
            while(val--){
                ans.push_back(num);
            }
        }
        return ans;
    }
};