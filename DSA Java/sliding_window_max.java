import java.io.*;
import java.util.*;

public class sliding_window_max{
  

public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    System.out.println("Enter size of array");
    int n = Integer.parseInt(br.readLine());
    int[] a = new int[n];
    System.out.println("Enter array elements");
    for(int i = 0; i < n; i++){
       a[i] = Integer.parseInt(br.readLine());
    }
    System.out.println("Enter window size");
    int k = Integer.parseInt(br.readLine());
    int[] ar = slidingWindowMax(a,k);
    System.out.println("Maximum element in each window of size " + k);
    for(int i=0;i<ar.length;i++){
        System.out.println(ar[i]);
    }
 }
 
 public static int[] slidingWindowMax(int[] arr , int k){
     Stack<Integer> st = new Stack<>();
     int[] ans = new int[arr.length];
     int[] fin = new int[arr.length - k +1];
     ans[arr.length - 1] = arr.length;
     int n = arr.length ; 
     for(int i = n - 2 ; i >= 0 ; i--){
         while(st.size()!=0 && arr[st.peek()] < arr[i]){
             st.pop();
         }
         if(st.size() == 0){
             ans[i] = arr.length;
         }
         else{
             ans[i] = st.peek();
            }
         st.push(i);
        }
     int j=0;
     for(int i=0;i<fin.length;i++){
        if(j<i){
             j=i;
        }
        while(ans[j] <= i+k-1){
            j=ans[j];
        }
        fin[i] = arr[j];
     }
     return fin;
    }
}
