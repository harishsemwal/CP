class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int countZero = 0;
        int countOne = 0;
        
        list<char> store;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                countZero += 1;
                store.push_back('0');
            }
            else if(s[i] == '1'){
                countOne += 1;
            }
        }
        
        string result = "";
        if(countOne >= 1){
            store.push_back('1');
            countOne--;
        }
        
        while(countOne){
            store.push_front('1');
            countOne--;
        }
        
        list<char>::iterator it;
        for(it = store.begin(); it != store.end(); ++it){
            result += *it;
        }
        return result;
    }
};