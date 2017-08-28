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
    public TreeNode constructMaximumBinaryTree(int[] nums) {
        int len = nums.length;
        if(len == 0)
            return null;
        int l = 0;
        int r = len-1;
        return maxBT(nums,l,r);       
    }
    
    TreeNode maxBT(int[] nums, int l, int r)
    {
        
        if(l > r)
            return null;
        int idx = l;
        for(int i = l+1; i <= r ; i++)
        {
            if(nums[i]>nums[idx])
                idx = i;
        }
        TreeNode root = new TreeNode(nums[idx]);
        root.left = maxBT(nums,l,idx-1);
        root.right = maxBT(nums,idx+1,r);
        return root;
    }
}