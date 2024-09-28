class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        long long ans=0;
        int n = maximumHeight.size()-1;
        sort(maximumHeight.begin(),maximumHeight.end());
        int temp = maximumHeight[n];
        for(int i=n;i>=0;i--){
            if(maximumHeight[i]<=temp){
                ans+=maximumHeight[i];
                temp = maximumHeight[i]-1;
            }
            else{
                if(temp==0){
                    return -1;
                }
                ans+=temp;
                temp-=1;
            }
        }
        return ans;
    }
};