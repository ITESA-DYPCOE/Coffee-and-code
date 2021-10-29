class Solution 
{
  public TreeNode sortedArrayToBST(int[] nums) 
  {
    int a = 0;
    int b = nums.length - 1;
    return helper(nums, a, b);
  }