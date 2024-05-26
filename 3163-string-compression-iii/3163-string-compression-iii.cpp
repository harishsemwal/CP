class Solution {
public:
    string compressedString(string word) {
        int n = word.length(),ind=0; 
        string ans="";
        while(ind<n){
            int cnt=0;
            char ch=word[ind];
            while(ind<n && word[ind]==ch && cnt<9) ++ind, ++cnt;
            ans+=to_string(cnt) + ch;
        }

        return ans;
    }
};