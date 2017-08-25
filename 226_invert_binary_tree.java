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
    public TreeNode invertTree(TreeNode root) {
        
        if(root == null)
            return root;
        if(root.left != null && root.right != null)
        {
            //TreeNode temp = new TreeNode(root.right.val);
            TreeNode temp = root.right;
            root.right = root.left;
            root.left = temp;
            invertTree(root.left);
            invertTree(root.right);
        }
        else if(root.left == null && root.right != null)
        {
            root.left = root.right;
            root.right = null;
            invertTree(root.left);
        }
        else if(root.left != null && root.right == null)
        {
            root.right = root.left;
            root.left = null;
            invertTree(root.right);
        }
        return root;
    }
}