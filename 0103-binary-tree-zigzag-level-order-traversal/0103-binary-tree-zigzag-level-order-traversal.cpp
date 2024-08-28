class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr) {
            return ans;  // Agar root null hai, return empty result
        }
        
        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight = true;  // Yeh flag direction track karega
        
        while (!q.empty()) {
            int n = q.size();
            vector<int> temp(n);  // Current level ke nodes ke values yaha store karenge
            for (int i = 0; i < n; i++) {
                TreeNode* curr = q.front();
                q.pop();
                
                // Sahi order mein values ko insert karein, based on direction
                int index = leftToRight ? i : (n - 1 - i);
                temp[index] = curr->val;
                
                // Left aur right child ko queue mein daalein
                if (curr->left != nullptr) {
                    q.push(curr->left);
                }
                if (curr->right != nullptr) {
                    q.push(curr->right);
                }
            }
            
            // Level process hone ke baad direction toggle karein
            leftToRight = !leftToRight;
            ans.push_back(temp);
        }
        
        return ans;
    }
};
