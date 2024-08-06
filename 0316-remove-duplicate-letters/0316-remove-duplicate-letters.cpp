class Solution {
public:
    string removeDuplicateLetters(string s) {
         stack<char> st;
        vector<int> vis(26, 0);
        vector<int> cnt(26, 0);

        for(int i = 0; i < s.size(); i++){
            cnt[s[i]-'a']++;
        }

        for(int i = 0; i < s.size(); i++){
            cnt[s[i]-'a']--;

            if(vis[s[i]-'a'] == 1){
                continue;
            }

            while(!st.empty() && s[i] < st.top() && cnt[st.top()-'a'] != 0){
                vis[st.top()-'a'] = 0;
                st.pop();
            }
            vis[s[i]-'a'] = 1;
            st.push(s[i]);
        }
        s.clear();
        while(!st.empty()){
            s = s + st.top();
            st.pop();
        }
        reverse(s.begin(), s.end());
        return s;
    }
};