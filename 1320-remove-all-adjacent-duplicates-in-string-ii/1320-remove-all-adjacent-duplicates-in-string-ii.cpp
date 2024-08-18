class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;
        for (auto c : s) {
            if (!st.empty() && st.top().first == c) {
                st.top().second++;
            } else {
                st.push({c, 1});
            }
            if (st.top().second == k) {
                st.pop();
            }
        }
        
        string ans = "";
        while (!st.empty()) {
            auto [ch, count] = st.top();
            ans.append(count, ch);
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
