/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * }
 */

//  Easy --- Pasy

class Solution {
public:
    vector<TreeNode*> buildTree(int start, int end){
        vector<TreeNode*> ans;

        if(start > end){
            ans.push_back(NULL);
            return ans;
        }

        for(int i = start; i <= end; i++){
            vector<TreeNode*> lt = buildTree(start, i - 1);
            vector<TreeNode*> rt = buildTree(i + 1, end);
            for(int j = 0; j < lt.size(); j++) {
			for(int k = 0; k < rt.size(); k++) {
				TreeNode* root = new TreeNode(i);   
				root->left = lt[j];  
                root->right = rt[k];   
				ans.push_back(root);   
			}
		}
        }

        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
        return buildTree(1, n);
    }
};