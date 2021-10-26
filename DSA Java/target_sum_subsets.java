import java.io.*;
import java.util.*;

public class target_sum_subsets {

    public static void main(String[] args) throws Exception {
        Scanner scn=new Scanner(System.in);
        System.out.println("Enter number of elements");
        int n=scn.nextInt();
        System.out.println("Enter array");
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i]=scn.nextInt();
        }
        System.out.println("Enter target subset sum");
        int tar=scn.nextInt();
        System.out.println(targetSumSubsets(arr,tar));
        
    }
    public static boolean targetSumSubsets(int[]arr,int tar){
        boolean[][] dp=new boolean[arr.length][tar+1];
        for(int i=0;i<arr.length;i++){
            dp[i][0]=true;
        }
        if(arr[0]<=tar){
            dp[0][arr[0]]=true;
        }
        for(int i=1;i<dp.length;i++){
            for(int j=1;j<dp[0].length;j++){
                int val=arr[i];
                dp[i][j]=dp[i-1][j];
                if(dp[i][j] ==false){
                    if(j-val>=0 && dp[i][j]==false){
                        dp[i][j]=dp[i-1][j-val];
                    }
                }
                
            }
        }
        return dp[dp.length-1][dp[0].length-1];
        
    }
}
