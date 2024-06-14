class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // int numTrack = 0;
        // int numIncr = 0;

        // for(auto num: nums){
        //     numTrack = max(numTrack, num);
        //     numIncr += numTrack - num;
        //     numTrack = numTrack + 1;
        // }

        // return numIncr;

        int n=nums.size(),moves=0;
        sort(nums.begin(), nums.end());
        for(int i=1;i<n;i++){
            if(nums[i-1]>=nums[i]){
                moves+=(1+nums[i-1]-nums[i]);
                nums[i]=1+nums[i-1];
            }
        }
        return moves;
    }
};