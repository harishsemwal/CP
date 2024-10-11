class Solution {
public:
    vector<vector<int>> ans;
    void help(int index, vector<int>&can, int target, vector<int> &sol){
        if(target == 0){
            ans.push_back(sol);
            return;
        }
        if(target < 0)
        {
            return;
        }
        if(index == can.size()){
            return;
        }
        help(index+1, can, target, sol);
        sol.push_back(can[index]);
        help(index, can, target-can[index], sol);
        sol.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& can, int target) {
        vector<int> sol;
        help(0, can, target, sol);
        return ans;
    }
};