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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        int flag = 1;
        if(root == null)
            return res;
        Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);
        while(!q.isEmpty())
        {
            int len = q.size();
            List<Integer> a = new ArrayList<>();
            for(int i = 0; i < len; i++)
            {
                TreeNode temp = q.poll();
                if(temp.left != null) q.offer(temp.left);
                if(temp.right != null) q.offer(temp.right);
                if(flag == 1)
                    a.add(temp.val);
                else if(flag == -1)
                    a.add(0,temp.val);
            }
            res.add(a);
            flag *= -1;
        }
        return res;
    }
}