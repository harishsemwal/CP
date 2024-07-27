class Solution {
public:
    bool isNumber(string s) {
        bool num = false;
        bool exp = false;
        bool dot = false;

        for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            if(ch >= '0'  && ch <= '9'){
                num = true;
            }
            else if(ch == 'e' || ch == 'E'){
                if(exp || !num){
                    return false;
                }
                exp = true;
                num = false;
            }
            else if(ch == '.'){
                if(dot || exp){
                    return false;
                }
                dot = true;
            }
            else if(ch == '-' || ch == '+'){
                if(i != 0 && s[i-1] != 'e' && s[i-1] != 'E'){
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return num; 
    }
};