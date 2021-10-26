import java.util.*;
public  class SingleNumber2{
	public static class Solution{
 	 public int singleNumber(int[] nums) {
        int ans=0;
        
        for(int i=0;i<32;i++){
            int sum=0;
            for(int j=0;j<nums.length;j++){
                if(((nums[j]>>i) & 1) ==1){
                    sum++;
                }
            }
            sum%=3;
            if(sum !=0){
                ans|=sum<<i;
            }
        }
        return ans;
    }
}
   
public static void main(String args[])  
    { 
	Solution s=new Solution();
    	int[] a={2,2,3,2};
	int result=s.singleNumber(a);
	System.out.println(result);
        }
}