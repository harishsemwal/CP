class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result;
        vector<int> s1;
        vector<int> s2;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0){
                s1.push_back(nums[i]);
            }
            else{
                s2.push_back(nums[i]);
            }
        }
        for(int i = 0; i < s1.size(); i++){
            result.push_back(s2[i]);
            result.push_back(s1[i]);
        }
        return result;
    }
};