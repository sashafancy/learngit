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
    public TreeNode sortedArrayToBST(int[] nums) {
        int len = nums.length;
        int l = 0, r = len-1;

        //TreeNode res = new TreeNode();
        //res = array(l,r);
        //return res;
        return array(nums,l,r);
    }
    TreeNode array(int[] nums ,int l, int r){
        if(l>r)
            return null;
        
        int mid = (r - l)/2 + l;
        TreeNode res = new TreeNode(nums[mid]);
        //res.val = nums[mid]; 
        res.left = array(nums,l,mid-1);
        res.right = array(nums,mid+1,r);  
        return res;
    }
}