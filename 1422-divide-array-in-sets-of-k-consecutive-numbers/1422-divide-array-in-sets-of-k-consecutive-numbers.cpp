class Solution {
public:
    bool isPossibleDivide(vector<int>& hand, int gs) {
        int size = hand.size();
        map<int, int> mp;
        for(int i = 0; i < size; i++){
            mp[hand[i]]++;
        }

        for(auto it = mp.begin(); it!= mp.end(); ){
            if(it->second > 0){
                for(int i = 0; i < gs; i++){
                    if(mp[it->first + i] > 0){
                        mp[it->first + i]--;
                    }
                    else{
                        return false;
                    }
                    
                }
            }
            else{
                it++;
            }
        }
        return true;
    }
};