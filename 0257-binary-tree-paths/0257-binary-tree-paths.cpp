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
    void solve(TreeNode *root, string current, vector<string>&ans){
        if(root == NULL){
            return;
        }
        if (!current.empty()) {
            current += "->";
        }
        current += to_string(root->val);
        if (root->left == nullptr && root->right == nullptr) {
            ans.push_back(current);
        }
        else{
            solve(root->left, current, ans);
            solve(root->right, current, ans);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        solve(root, "", ans);
        return ans;
    }
};