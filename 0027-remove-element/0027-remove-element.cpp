class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // vector<int> num = nums;
        // int i = 0, j=0;
        // int count = 0;
        // int n = nums.size();
        // while(i < n){
        //     if(nums[i] != val){
        //         num[j++] = nums[i++];
        //         count++;
        //     }
        // }
        // return count;

        int n = nums.size();
        int j = 0, count = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] != val){
                nums[j++] = nums[i];
                count++;
            }
        }
        return count;
    }
};