class Solution {
public:
    int subarraysDivByK(std::vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();
        int prevSum = 0, count = 0;
        mp[0] = 1;
        for(int i = 0; i < n; i++){
            prevSum += nums[i];
            int rem = prevSum % k;
            if(rem < 0){
                rem += k;
            }
            if(mp.find(rem) != mp.end()){
                count += mp[rem];
                mp[rem]++;
            }
            else{
                mp[rem] = 1;
            }
        }
        return count;
    }
};