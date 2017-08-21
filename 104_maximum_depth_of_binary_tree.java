/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public int maxDepth(TreeNode root) {
        int length = 0;
        if (root == null)
            return length;
        if (root.left == null && root.right == null)
            return length + 1;
        length++;
        return length + Math.max(maxDepth(root.left),maxDepth(root.right));
    }
}