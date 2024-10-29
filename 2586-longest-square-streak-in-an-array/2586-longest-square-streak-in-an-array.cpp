class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_set<int>st;
        for(auto it:nums){
            st.insert(it);
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            int cnt=0;
            while(st.find(temp)!=st.end()){
                cnt++;
                if(temp>=30000)break;
                temp*=temp;
            }
            ans=max(ans,cnt);
        }
        if(ans<=1)return -1;
        return ans;
    }
};