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
    public int minDepth(TreeNode root) {
        int depth = 0;
        if(root == null)
            return depth;
        else if(root.left == null && root.right == null)
            return 1;
        else if(root.left == null || root.right == null)
        {
            depth++;
            return depth+Math.max(minDepth(root.left),minDepth(root.right));
        }
        else
        {
            depth++;
            return depth+Math.min(minDepth(root.left),minDepth(root.right));
        }
        
    }
}