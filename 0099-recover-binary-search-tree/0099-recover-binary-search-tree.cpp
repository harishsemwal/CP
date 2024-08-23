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
    void solve(TreeNode* root, TreeNode** first, TreeNode** mid, TreeNode** last, TreeNode** prev) {
        if (root == nullptr) {
            return;
        }

        solve(root->left, first, mid, last, prev);

        if (*prev && root->val < (*prev)->val) {
            if (!*first) {
                *first = *prev;
                *mid = root;
            } else {
                *last = root;
            }
        }

        *prev = root;

        solve(root->right, first, mid, last, prev);
    }

    void recoverTree(TreeNode* root) {
        TreeNode *first = nullptr, *mid = nullptr, *last = nullptr, *prev = nullptr;
        solve(root, &first, &mid, &last, &prev);

        if (first && last) {
            swap(first->val, last->val);
        } else if (first && mid) {
            swap(first->val, mid->val);
        }
    }
};