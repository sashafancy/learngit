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
    public boolean findTarget(TreeNode root, int k) {
        ArrayList<Integer> res = traversal(root);
        int a = res.get(0);
        int b = res.get(res.size()-1);
        int count1 = 0;
        int count2 = res.size()-1;
        while(a<b)
        {
            if(a+b==k)
                return true;
            else if(a+b>k)
            {
                count2--;
                 b = res.get(count2);
            }
               
            else if(a+b<k)
            {
                count1++;
                a = res.get(count1);                
            }

        }
        return false;
    }
    
    ArrayList traversal(TreeNode root)
    {
        ArrayList<Integer> res = new ArrayList<>();
        if(root == null)
            return res;
        res.addAll(traversal(root.left));
        res.add(root.val);
        res.addAll(traversal(root.right));
        return res;
    }
}