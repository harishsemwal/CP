class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            mp[s[i]]++;
        }
        vector<pair<int, char>> vt;
        for(auto ch: mp){
            vt.push_back({ch.second, ch.first});
        }
        sort(vt.begin(), vt.end(), greater<pair<int, char>>());
        string result = "";
        for(auto x: vt){
            for(int i = 0; i < x.first; i++){
                result += x.second;
            }
        }
        return result;
    }
};