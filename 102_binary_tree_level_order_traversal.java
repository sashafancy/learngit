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
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        Queue<TreeNode> q = new LinkedList<>();
        
        if(root == null) return res;
        
        q.offer(root);
        while(!q.isEmpty())
        {
            int len = q.size();
            List<Integer> temp = new ArrayList<>();
            for(int i = 0; i< len; i++)
            {
                TreeNode n = q.poll();
                temp.add(n.val); 
                if(n.left != null) q.offer(n.left);
                if(n.right != null) q.offer(n.right);
  
            }
            res.add(temp);
        }
        return res;
        
    }
}