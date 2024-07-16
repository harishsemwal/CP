class Solution {
public:
   int removeDuplicates(vector<int>& nums) {
    map<int, int> mp;
    for(auto x: nums){
        mp[x]++;
    }
    int i = 0;
    for(auto x: mp){
        nums[i++] = x.first;
    }
    return mp.size();
   }
};