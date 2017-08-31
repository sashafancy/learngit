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
    public List<Integer> largestValues(TreeNode root) {
        List<Integer> res = new ArrayList<>();
        Queue<TreeNode> q = new LinkedList<>();
        
        if(root == null)
            return res;
        q.offer(root);
        while(!q.isEmpty())
        {
            int len = q.size();
            int max = Integer.MIN_VALUE;
            for(int i = 0; i<len; i++)
            {
                TreeNode temp = q.poll();
                max = Math.max(max,temp.val);
                if(temp.left != null) q.offer(temp.left);
                if(temp.right != null) q.offer(temp.right);
            }
            res.add(max);
        }
        return res;
    }
}