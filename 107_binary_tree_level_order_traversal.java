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
    public List<List<Integer>> levelOrderBottom(TreeNode root) {
        List<List<Integer>> a = new ArrayList<List<Integer>>();
        if(root == null) return a;
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        while(!q.isEmpty())
        {
            List<Integer> temp = new ArrayList<>();
            int len = q.size();
            for(int i = 0; i < len; i++)
            {
                TreeNode node = q.poll();
                temp.add(node.val);
                if(node.left != null) q.add(node.left);
                if(node.right != null) q.add(node.right);                
            }
            a.add(0,temp);
   
        }
        return a;
    }
}