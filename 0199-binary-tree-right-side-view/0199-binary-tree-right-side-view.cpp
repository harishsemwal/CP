/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    void solve(TreeNode *root, int val){
        if(root == nullptr){
            return;
        }
        if(ans.size() == val){
            ans.push_back(root->val);
        }
        solve(root->right, val+1);
        solve(root->left, val+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        solve(root, 0);
        return ans;
    }
};