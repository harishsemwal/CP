class Solution {
public:
    bool isPalindrome(string s, int left, int right) {
        while(left < right) {
            if(s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    bool validPalindrome(string nums) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;

        while(left < right) {
            if(nums[left] != nums[right]) {
                return isPalindrome(nums, left + 1, right) || isPalindrome(nums, left, right - 1);
            }
            left++;
            right--;
        }
        return true;
    }
};
