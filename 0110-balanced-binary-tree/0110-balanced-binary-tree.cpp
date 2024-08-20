class Solution {
public:
    int getHeight(TreeNode *root) {
        if (root == NULL) return 0;
        // BBT - left - right always yh to 0 or yh to 1 hona chaiye
        int lh = getHeight(root->left);
        int rh = getHeight(root->right);

        if (lh == -1 || rh == -1 || abs(lh - rh) > 1) {
            return -1;
        }

        return max(lh, rh) + 1;
    }

    bool isBalanced(TreeNode* root) {
        return getHeight(root) != -1;
    }
};
