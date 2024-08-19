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
    int solve(TreeNode *root, int &res){
        if(root == NULL){
            return 0;
        }
        // left
        int left = solve(root->left, res);
        // right
        int right = solve(root->right, res);

        int maxi = max(left, right) + 1;
        int temp = max(maxi, (left+right+1));
        res = max(res, temp);

        return maxi;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int res = INT_MIN;
        solve(root, res);
        return res-1;
    }
};