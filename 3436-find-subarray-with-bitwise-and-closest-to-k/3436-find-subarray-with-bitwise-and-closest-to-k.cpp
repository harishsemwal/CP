class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int ans = INT_MAX;  
        int j = 0;
       vector <int> bit(32,0);
        int curr = INT_MAX;
        for(int i=0;i<nums.size();i++){
            
            for(int l=0;l<32;l++){
                if(nums[i]&(1<<l)){
                    bit[l]+=1;
                }
            }
            curr = curr & nums[i];
            ans = min(ans,abs(curr-k));
            while(curr<=k &&j<=i){
                for(int l=0;l<32;l++){
                    
                    if(nums[j]&(1<<l)) bit[l]-=1;
                    
                }
                
                int temp = 0;
                for(int l=0;l<32;l++){
                    if(bit[l]==i-j){
                        temp = temp | (1<<l);
                    }
                }
                curr = temp;
                ans = min(ans,abs(curr-k));
                j+=1;
            }
            ans = min(ans,abs(curr-k));   
        }
        return ans;
    }
};