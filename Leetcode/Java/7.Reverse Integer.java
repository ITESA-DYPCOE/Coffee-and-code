import java.util.*;
public  class ReverseInteger{
	public static class Solution{
 	public int reverse(int x) {
        boolean neg=false;
        if(x< 0){
            neg=true;
            x*=-1;
        }
        long rev=0;
        while(x>0){
            rev=(rev*10) +(x%10);
            x=x/10;
        }
        if(rev> Integer.MAX_VALUE){
            return 0;
        }
        return neg ? (int)(-1*rev) : (int)rev;
    }
}
public static void main(String args[])  
    { 
	Solution s=new Solution();
    	int n=123;
	int result=s.reverse(n);
	System.out.println(result);
        
	
    } 
 

}