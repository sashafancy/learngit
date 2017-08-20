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
    public boolean isBalanced(TreeNode root) {
        if(root == null)
            return true;
        
        else
        {
            int a = height(root);
            while(a>0)
            {
                if(Math.max(height(root.left)-height(root.right),height(root.right)-height(root.left))<=1)
                {
                    return isBalanced(root.left) && isBalanced(root.right);
                }
                return false;
            }   
            return true;
        }
            
    }
    
    int height(TreeNode root){
        int height = 0;
        if(root == null)
            return 0;
        if(root.left == null && root.right == null)
            return 1;
        height++;
        return height + Math.max(height(root.left),height(root.right));
    }
}