class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string res = "";
        for(int i = 0; i < str[0].size(); i++){
            for(auto x: str){
                if(x[i] != str[0][i]){
                    return res;
                }
            }
            res = res + str[0][i];
        }
        return res;
    }
};