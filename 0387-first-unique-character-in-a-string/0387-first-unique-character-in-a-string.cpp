class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<int, int> mp;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }
        for(int i = 0; i < s.size(); i++){
            auto x = mp;
            if(x[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};