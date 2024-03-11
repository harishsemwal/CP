class Solution {
public:
    string customSortString(string order, string s) {
        // sort(order.begin(), order.end());
        // sort(s.begin(), s.end());
        // int n = order.size();
        // int m = s.size();
        // string result = "";
        
        // int size = n;
        // if(n > m){
        //     size = n;
        // }else{
        //     size = m;
        // }
        // for(int i = 0; i < size; i++){
        //     if(s[i] == order[i]){
        //         result += order[i];
        //     }
        //     else{
        //         result += s[i];
        //         break;
        //     }
        // }
        // return result;
        
        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < n; j++){
        //         if(s[i] == order[j]){
        //             result += s[j];
        //         }
        //     }
        //     if(s[i] != order[i]){
        //         result += s[i];
        //     }
        // }
        // return result;
        
        // order = order + s;
        // string result = "";
        // unordered_map<char, int> mp;
        // for(int i = 0;  i < order.size(); i++){
        //     mp[order[i]]++;
        // }
        // for(auto x: mp){
        //     if(x.second > 1){
        //         result += x.first;
        //     } 
        // }
        // for(auto x: mp){
        //     if(x.second <= 1){
        //         result += x.first;
        //         break;
        //     }
        // }
        // return result;
        
        map<char, int> mp1;
        map<char, int> mp2;
        string result = "";
        for(auto x: order){
            mp1[x]++;
        }
        for(auto y: s){
            mp2[y]++;
        }
        
        for(auto c: order){
            if(mp2[c]!=0){
                for(int i = 0; i < mp2[c]; i++)
                    result += c;
            }
        }
        
        for(auto c: s){
            if(mp1[c]==0){
                result += c;
            }
        }
        
        return result;
    }
};