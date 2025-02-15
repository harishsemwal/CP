class Solution {
public:
    bool solve(int v, string s, int sum, int index) {
        if (index == s.size()) 
            return sum == v;

        int num = 0;
        for (int i = index; i < s.size(); i++) {
            num = num * 10 + (s[i] - '0');
            if (solve(v, s, sum + num, i + 1)) 
                return true;
        }
        return false;
    }

    int punishmentNumber(int n) {
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            int sq = i * i;
            if (solve(i, to_string(sq), 0, 0)) 
                ans += sq;
        }
        return ans;
    }
};
