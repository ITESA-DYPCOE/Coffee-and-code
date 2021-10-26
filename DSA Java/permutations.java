import java.io.*;
import java.util.*;

public class permutations {

    public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(System.in);
        System.out.println("Enter string");
        String str = scn.next();
        permutation(str,"");

    }

    public static void permutation(String str, String asf) {
        if(str.length()==0){
            System.out.println(asf);
            return;
        }
        for(int i = 0; i < str.length(); i++){
            String ros = str.substring(0,i) + str.substring(i+1);
            permutation(ros,asf+str.charAt(i));
        }
        
    }

}
