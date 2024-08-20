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
    void inOrder(TreeNode* root, int& prev, int& minDiff) {
        if (root == nullptr) {
            return;
        }
        inOrder(root->left, prev, minDiff);
        if (prev != -1) {
            minDiff = min(minDiff, root->val - prev);
        }
        prev = root->val;
        inOrder(root->right, prev, minDiff);
    }

    int getMinimumDifference(TreeNode* root) {
        int prev = -1;
        int minDiff = INT_MAX;
        inOrder(root, prev, minDiff);
        return minDiff;
    }
};
