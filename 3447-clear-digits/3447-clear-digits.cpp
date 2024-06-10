class Solution {
public:
    string clearDigits(string s) {
       int left = 0;
       int right = s.size();
       string ans = "";
       while(left < right){
        if(!isdigit(s[left])){
            ans += s[left];
            left++;
        }
        else{
            left++;
            if(ans.size() >= 1){
                ans.pop_back();
            }
        }
       }
       return ans;
    }
};