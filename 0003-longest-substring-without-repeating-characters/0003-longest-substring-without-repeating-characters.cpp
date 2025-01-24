class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int res = 0, left = 0;
        map<char, int> mp;

        for (int right = 0; right < n; right++) {
            if (mp.find(s[right]) != mp.end() && mp[s[right]] >= left) {
                left = mp[s[right]] + 1;
            }
            mp[s[right]] = right;
            res = max(res, right - left + 1);
        }
        
        return res;
    }
};
