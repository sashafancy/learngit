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
    public int diameterOfBinaryTree(TreeNode root) {
        TreeNode res = onepass(root);
        return diameter(res);
    }
    
    TreeNode onepass(TreeNode root)
    {
        if(root == null)
            return root;
        if(root.left == null && root.right == null)
        {
            root.val = 0;
        }
        else
        {
            if(root.left != null && root.right != null)
                root.val = 1 + Math.max(onepass(root.left).val,onepass(root.right).val);
            else if(root.left != null)
                root.val = 1 + onepass(root.left).val;
            else if(root.right != null)
                root.val = 1 + onepass(root.right).val;
            //root.val = 1 + Math.max(onepass(root.left).val,onepass(root.right).val);
        }
        return root;
    }
    int diameter(TreeNode root)
    {
        int a = 0;
        if(root == null)
            return a;
        if(root.left != null)
            a = 1 + root.left.val;
        if(root.right != null)
            a += 1 + root.right.val;
        return Math.max(Math.max(a, diameter(root.left)),diameter(root.right));
    }
}