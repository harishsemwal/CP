class Solution {
public:
int countSubsetSum(vector<int>& nums,int sum1){
     int n=nums.size();
     int dp[n+1][sum1+1];
     for(int i=0; i<n+1; i++){
         for(int j=0; j<sum1+1; j++){
           if(i==0){
               dp[i][j]=0;
           }
           if(j==0){
               dp[i][j]=1;
           }
         }
     }
     for(int i=1; i<n+1; i++){
         for(int j=0; j<sum1+1; j++){
          if(nums[i-1]<=j){
              dp[i][j]=dp[i-1][j-nums[i-1]]+dp[i-1][j];
          }
          else{
              dp[i][j]=dp[i-1][j];
          }
         }
     }
     return dp[n][sum1];
}
    int findTargetSumWays(vector<int>& nums, int target) {
     int n=nums.size();
        int sum=0;
        
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }
         if(((sum+target)%2!=0) || abs(target)>sum){
             return 0;
         }
    int sum1=(target+sum)/2;
     return countSubsetSum(nums,abs(sum1));
    }
};