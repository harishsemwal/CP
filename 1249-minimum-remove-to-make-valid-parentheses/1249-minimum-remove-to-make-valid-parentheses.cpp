class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int count = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                count += 1;
            }
            if(s[i] == ')'){
                if(count > 0){
                    count--;
                }
                else{
                    s[i] = 0;
                }
            }
        }
        
        count = 0;
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] == ')'){
                count += 1;
            }
            
            if(s[i] == '('){
                if(count > 0){
                    count--;
                }
                else{
                    s[i] = 0;
                }
            }
        }
        
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] != 0){
                ans += s[i];
            }
        }
        return ans;
    }
};