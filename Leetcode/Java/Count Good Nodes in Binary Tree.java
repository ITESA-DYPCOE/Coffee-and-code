/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private int goodCount = 0;
    public int goodNodes(TreeNode root) {
        goodNodesHelper(root, Integer.MIN_VALUE);
        return goodCount;
    }

    private void goodNodesHelper(TreeNode root, Integer maxValSeen){
        if(root==null){
            return;
        }

        if(root.val>= maxValSeen){
            goodCount++;
        }
        goodNodesHelper(root.left, Math.max(root.val, maxValSeen));

        goodNodesHelper(root.right, Math.max(root.val, maxValSeen));

        return;


    }
}