class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string> ans;
        string k1 = "0";
        string k2 = "1";
        if(n == 1){
            ans.push_back(k1);
            ans.push_back(k2);
            return ans;
        }
        int k = (1 << n);
        for(int i = 1; i < k; i++){
            string s = "";
            for(int j = n - 1; j >= 0; j--){
                if(((i >> j) & 1) == 1){
                    s.push_back('1');
                }
                else{
                    s.push_back('0');
                }
            }
            int f = 0;
            for(int j = 0; j < n - 1; j++){
                if(s[j] == '0' && s[j + 1] == '0'){
                    f = 1;
                    break;
                }
            }
            if(f == 0){
                ans.push_back(s);
            }
        }
        return ans;
    }
};