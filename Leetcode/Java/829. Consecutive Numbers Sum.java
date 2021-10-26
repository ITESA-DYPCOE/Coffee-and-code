import java.util.*;
public  class ConsecutiveNumberSum{
	public static class Solution{
 	public int consecutiveNumbersSum(int n) {
        int count=0;
        for(int k=1;2*n>k*(k-1);k++){
            int num=n-(k*(k-1)/2);
            if(num %k ==0){
                count++;
            }
        }
        return count;
    }
}
public static void main(String args[])  
    { 
	Solution s=new Solution();
    	int n=5;
	int result=s.consecutiveNumbersSum(n);
	System.out.println(result);
        
	
    } 
 

}