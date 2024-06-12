class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int i = 0;
        for(auto x: mp){
            int r = x.second;
            while(r--){
               nums[i++] = x.first; 
            }
        }
    }
};