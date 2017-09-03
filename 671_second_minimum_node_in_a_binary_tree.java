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
    public int findSecondMinimumValue(TreeNode root) {
        //int res = 0;
        Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);
        int res = root.val;
        int min2 = Integer.MAX_VALUE;
        while(!q.isEmpty())
        {
            int len = q.size();
            //int min2 = Integer.MAX_VALUE;
            for(int i = 0; i<len; i++)
            {
                TreeNode temp = q.poll();
                //int min = res;
                if(temp.left != null)
                {
                    q.offer(temp.left);
                    q.offer(temp.right);
                    if(temp.left.val>res && temp.left.val<min2)
                        min2 = temp.left.val;
                    if(temp.right.val>res && temp.right.val<min2)
                        min2 = temp.right.val;
                }
            }
        }
        if(min2<Integer.MAX_VALUE)
                return min2;
        return -1;
    }
}