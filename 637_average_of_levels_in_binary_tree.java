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
    public List<Double> averageOfLevels(TreeNode root) {
        List<Double> res = new ArrayList<>();
        Queue<TreeNode> q = new LinkedList<>();
        if(root == null)
            return res;
        q.offer(root);
        while(!q.isEmpty())
        {
            int len = q.size();
            double sum = 0;
            int count = 0;
            for(int i = 0; i<len; i++)
            {
                TreeNode temp = q.poll();
                sum += temp.val;
                if(temp.left!=null) q.offer(temp.left);
                if(temp.right!=null) q.offer(temp.right);
                count++;
            }
            res.add(sum/count);   
        }
        return res;
    }
}