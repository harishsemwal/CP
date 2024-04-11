class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        int i = 0;
        while (k > 0 && i < n - 1) {
            if (num[i] > num[i + 1]) {
                num.erase(i, 1);
                k--;
                if (i > 0) {
                    i--;
                }
            } else {
                i++;
            }
        }
        while(k > 0 && !num.empty()){
            num.pop_back();
            k--;
        }
        
        int st = 0;
        while(st < num.size() && num[st] == '0'){
            st += 1;
        }
        num.erase(0, st);
        
        if(num.empty()){
            return "0";
        }
        else{
            return num;
        }
    }
};