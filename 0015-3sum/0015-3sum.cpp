#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());  // Sort the array to use two pointers

        for(int i = 0; i < n; i++) {
            if(i > 0 && nums[i] == nums[i-1]) {
                continue;  // Skip duplicate elements for the i-th position
            }

            int j = i + 1;
            int k = n - 1;

            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if(sum < 0) {
                    j++;  // Move the left pointer right to increase the sum
                } else if(sum > 0) {
                    k--;  // Move the right pointer left to decrease the sum
                } else {
                    // Found a triplet
                    result.push_back({nums[i], nums[j], nums[k]});

                    // Move the left pointer right and skip duplicates
                    j++;
                    while(j < k && nums[j] == nums[j-1]) {
                        j++;
                    }

                    // Move the right pointer left and skip duplicates
                    k--;
                    while(j < k && nums[k] == nums[k+1]) {
                        k--;
                    }
                }
            }
        }

        return result;
    }
};
