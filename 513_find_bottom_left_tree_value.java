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
    public int findBottomLeftValue(TreeNode root) {
        int left = 0;
        Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);
        while(!q.isEmpty())
        {
            int len = q.size();      
            for(int i = 0; i<len; i++)
            {
                TreeNode temp = q.poll();
                if(temp.left != null) q.offer(temp.left);
                if(temp.right != null) q.offer(temp.right);
                if(i == 0) left = temp.val;    
            }
        }
        return left;
    }
}