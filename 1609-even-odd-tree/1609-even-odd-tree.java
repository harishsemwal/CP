/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean isEvenOddTree(TreeNode root) {
        if (root == null)
            return true;

        Queue<TreeNode> queue = new LinkedList<>();
        queue.add(root);
        int level = 0;

        while (!queue.isEmpty()) {
            TreeNode prevNode = null;
            int size = queue.size();

            for (int i = 0; i < size; i++) {
                TreeNode currNode = queue.poll();

                // Check if level is even
                if (level % 2 == 0) {
                    // Even level, so nodes should have odd values
                    if (currNode.val % 2 == 0)
                        return false;

                    // For nodes at even level, values should be strictly increasing
                    if (prevNode != null && prevNode.val >= currNode.val)
                        return false;
                } 
                else { // Level is odd
                    
                    
                    // Odd level, so nodes should have even values
                    if (currNode.val % 2 == 1)
                        return false;

                    // For nodes at odd level, values should be strictly decreasing
                    if (prevNode != null && prevNode.val <= currNode.val)
                        return false;
                }

                prevNode = currNode;

                if (currNode.left != null)
                    queue.add(currNode.left);
                if (currNode.right != null)
                    queue.add(currNode.right);
            }
            level++;
        }

        return true;
    }
}
