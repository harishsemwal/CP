class Solution {
public:
    string minWindow(string s, string p) {
        unordered_map<char, int> mp;
        int minLen = INT_MAX;
        
        int start = 0;
        for(auto x: p){
            mp[x]++;
        }
        
        int i = 0;
        int j = 0;
        int count = mp.size();
        
        while(j < s.size()){
            if(mp.find(s[j]) != mp.end()){
                mp[s[j]]--;
                if(mp[s[j]] == 0){
                    count--;
                }
            }
            if(count == 0){
                while(count == 0){
                    if(mp.find(s[i]) != mp.end()){
                        mp[s[i]]++;
                        
                        if(mp[s[i]] == 1){
                            count++;
                            
                            if(j-i+1 < minLen){
                                minLen = j-i+1;
                                start = i;
                            }
                        }
                    }
                    i++;
                }    
            }
            j++;
        }
        if(minLen == INT_MAX){
            return "";
        }
        return s.substr(start, minLen);
    }
};