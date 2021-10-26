import java.util.*;
public  class MultipleString{
	public static class Solution{
 	public static String multiply(String num1, String num2) {
        if(num1.equals("0") || num2.equals("0")) return "0";
        int l1=num1.length();
        int l2=num2.length();
        int []result=new int[l1+l2];
        int mf=0;
        for(int i=l2-1;i>=0;i--){
            int ival=num2.charAt(i)-'0';
            int k=result.length-1-mf;
            int carry=0;
            for(int j=l1-1;j>=0 || carry!=0;j--){
                int jval=j>=0 ? num1.charAt(j) -'0':0;
                int prod=ival * jval +carry+result[k];
                result[k]=prod%10;
                carry=prod/10;
                k--;
            }
            mf++;
        }
        String res="";
        boolean flag=false;
        for(int ele:result){
            if(ele ==0 && flag==false){
                
            }
            else{
                flag=true;
            res+=ele;
            }
        }
        
        return res;
    }
}
public static void main(String args[])  
    { 
	Solution s=new Solution();
    	String a="7";
	String b="5";
	String result=s.multiply(a,b);
	System.out.println(result);
        
	
    } 
 

}