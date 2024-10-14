class Solution {
public:

int solve(map<int,int>&mp,int x){
    vector<pair<int,int>>ans; //freq ,element storing 
    for(auto &i:mp){
        ans.push_back({i.second,i.first});        
    }

    int res=0;
    auto cmp=[](auto a,auto b){
        if(a.first==b.first)return a.second>b.second;
        return a.first>b.first;        
    };
    sort(ans.begin(),ans.end(),cmp);//costum sort
     
    for(int i=0;i<ans.size();i++){
         
        res+=(ans[i].first)*ans[i].second;
        x-=1;//decrease x every times
        if(x==0)break;
    }
    return res;
}
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();

        vector<int>ans(n-k+1);
         for(int i=0;i<n-k+1;i++){
            map<int,int>mp;
            //calculating freq
            for(int j=i;j<k+i;j++){               
                mp[nums[j]]++;
            } 
            int f=solve(mp,x);
            ans[i]=f;
         }
         return ans;
    }
};