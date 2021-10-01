class Solution {
     public String complexNumberMultiply(String a, String b) {
        int c=0;
        int d=0;
        int e=0;
        int f=0;
        int temp=0;
        char start=' ';
        char end=' ';
        start =a.charAt(0);
        if(start=='-') {
        for(int i=1;i<a.length();i++) {
            if(a.charAt(i)>=48 && a.charAt(i)<=57 && temp==0) {
                c=10*c+(int)(a.charAt(i)-48);
            }else if(a.charAt(i)>=48 && a.charAt(i)<=57 && temp!=0) {
                d=10*d+(int)(a.charAt(i)-48);
            }else if((a.charAt(i)=='+' || a.charAt(i)=='-')) {
                end=a.charAt(i);
                 temp++;
            }
            else {
                temp++;
            }
        }
        }
        else {
          for(int i=0;i<a.length();i++) {
            if(a.charAt(i)>=48 && a.charAt(i)<=57 && temp==0) {
                c=10*c+(int)(a.charAt(i)-48);
            }
            else if(a.charAt(i)>=48 && a.charAt(i)<=57 && temp!=0) {
                d=10*d+(int)(a.charAt(i)-48);
            }
            else if((a.charAt(i)=='+' || a.charAt(i)=='-')) {
                end=a.charAt(i);
                 temp++;
            }
            else {
                temp++;
            }
        }  
        }
        if(start=='-') {
            c=-c;
        }
         if(end=='-') {
             d=-d;
         }
         temp=0;start =b.charAt(0);end=' ';
         if(start=='-') {
             for(int i=1;i<b.length();i++) {
                 if(b.charAt(i)>=48 && b.charAt(i)<=57 && temp==0) {
                     e=10*e+(int)(b.charAt(i)-48);
                 }
                 else if(b.charAt(i)>=48 && b.charAt(i)<=57 && temp!=0) {
                     f=10*f+(int)(b.charAt(i)-48);
                 }
                 else if((b.charAt(i)=='+' || b.charAt(i)=='-')) {
                     end=b.charAt(i);
                     temp++;
                 }
        else {
            temp++;
        }
             }
         }
         else {
             for(int i=0;i<b.length();i++) {
                 if(b.charAt(i)>=48 && b.charAt(i)<=57 && temp==0) {
                     e=10*e+(int)(b.charAt(i)-48);
                 }
                 else if(b.charAt(i)>=48 && b.charAt(i)<=57 && temp!=0) {
                     f=10*f+(int)(b.charAt(i)-48);
                 }
                 else if((b.charAt(i)=='+' || b.charAt(i)=='-')) {
                     end=b.charAt(i);
                     temp++;
                 }
                 else {
                     temp++;
                 }
             }  
         }
         if(start=='-') {
             e=-e;
         }
         if(end=='-')
         {
             f=-f;

         }
         return (c*e-d*f)+"+"+(d*e+c*f)+'i';
     }
}
