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
    public TreeNode mergeTrees(TreeNode t1, TreeNode t2) {
        if(t1 == null && t2 == null)
            return null;
        int sum = 0;
        if(t1 != null)
            sum += t1.val;
        if(t2 != null)
            sum += t2.val;
        TreeNode root = new TreeNode(sum);
        /*
        if(t1 != null && t2 != null)
        {
            root.left = mergeTrees(t1.left, t2.left);
            root.right = mergeTrees(t1.right, t2.right);            
        }
        */
         if(t1 != null && t2 != null)
        {
            root.left = mergeTrees(t1.left, t2.left);
            root.right = mergeTrees(t1.right, t2.right);            
        }
        else if(t1 != null)
        {
            root.left = t1.left;
            root.right = t1.right;
        }
        else if(t2 != null)
        {
            root.left = t2.left;
            root.right = t2.right;
        }
        return root;
            
    }
}