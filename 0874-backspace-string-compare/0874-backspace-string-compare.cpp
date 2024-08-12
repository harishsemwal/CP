class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<int> st, tt;
        for(auto x: s){
            if(x >= 'a' && x <= 'z'){
                st.push_back(x);
            }
            else if(x == '#' && !st.empty()){
                st.pop_back();
            }
        }

        for(auto y: t){
            if(y >= 'a' && y <= 'z'){
                tt.push_back(y);
            }
            else if(y == '#' && !tt.empty()){
                tt.pop_back();
            }
        }
        return st == tt;
    }
};