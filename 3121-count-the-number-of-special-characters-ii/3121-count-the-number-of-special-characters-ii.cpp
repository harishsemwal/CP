class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;
        vector<int> small(26, false);
        vector<int> capi(26, false);
        
        for(int i = 0; i < word.size(); i++){
            if(word[i] >= 'A' && word[i] <= 'Z'){
                capi[word[i]-'A'] = true;
            }
            else{
                small[word[i]-'a'] = true; 
            }
        }
        
        for(int i = 0; i < 26; i++){
            if(small[i] && capi[i] && word.find_last_of(i+'a')  < word.find(i+'A')){
                count += 1;
            }
        }
        return count;
    }
};