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
    TreeNode* solve(TreeNode *root){
        // base
        if(root == NULL){
            return root;
        }
        // left & right
        TreeNode *temp = root->left;
        root->left  = root->right;
        root->right = temp;

        TreeNode* left = solve(root->left);
        TreeNode* right = solve(root->right);

        return root;
    }
    TreeNode* invertTree(TreeNode* root) {
        return solve(root);
    }
};