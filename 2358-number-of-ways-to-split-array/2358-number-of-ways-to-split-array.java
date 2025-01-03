class Solution {
    public int waysToSplitArray(int[] nums) {
        long allSum = 0;
        long n = nums.length;
        for(int i = 0; i < n; i++){
            allSum = allSum + nums[i];
        }

        long leftSum = 0;
        int count = 0;
        for(int i = 0; i < n-1; i++){
            leftSum = leftSum + nums[i];
            allSum = allSum - nums[i];

            if(leftSum >= allSum){
                count++;
            }
        }
        return count;
    }
}