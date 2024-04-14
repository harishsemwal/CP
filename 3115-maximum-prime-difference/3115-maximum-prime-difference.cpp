class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) return false;
        }
        return true;
    }
    //one of the easy solution-----------Timepass LeetCode Solution----------------
    int maximumPrimeDifference(vector<int>& nums) {
        int start = 0;
        int end = 0;
        bool flag = true;
        for(int i = 0; i < nums.size(); i++){
            if(start == 0 && flag == true){
                if(isPrime(nums[i])){
                    start = i;
                    flag = false;
                }
            }
            else{
                if(isPrime(nums[i])){
                    end = i;
                }
            }
        }
        return ((end - start) > 0) ? end - start : 0;
    }
};