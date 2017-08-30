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
    public boolean isSubtree(TreeNode s, TreeNode t) {
        if(s == null || t == null)
            return false;
        if(s.val != t.val)
        {
            return isSubtree(s.left,t) || isSubtree(s.right,t);
        }
        else
        {
            if(isSameTree(s,t)==true)
                return true;
            return isSubtree(s.left,t) || isSubtree(s.right,t);
        }

    }
    public boolean isSameTree(TreeNode s, TreeNode t)
    {
        if(s == null && t == null)
            return true;
        else if(s == null || t == null)
            return false;
        else if(s.val != t.val)
            return false;
        else if(isSameTree(s.left,t.left)==true && isSameTree(s.right,t.right)==true)
            return true;
        return false;
    }
}