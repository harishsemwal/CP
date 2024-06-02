class Solution {
public:
    int solve(int x, int y){
        return (x * y);
    }
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;

        int result = 0;
        while(left < right){
            result = max(result, solve(min(height[left], height[right]), (right - left)));
            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return result;
    }
};