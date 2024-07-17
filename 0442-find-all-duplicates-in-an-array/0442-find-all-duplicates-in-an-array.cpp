class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n=size(nums);
        for(int i=0;i<n;i++){
            int x=abs(nums[i]);
            cout << x << " ";
            if(nums[x-1]<0){
                
                ans.push_back(x);
                cout << "ys" << x << " ";
            }
            nums[x-1]*=-1;
        }
        return ans;
    }
};