
import java.io.*;
import java.util.*;
class HelloWorld {
    public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int i=1;
         int m=0;
         int s=sc.nextInt();
         int n=sc.nextInt();
         while(i*i<=n){
             m=i*i;
             i++;
             
         }
         int a=m*(s*s);
         System.out.println(a);
        
    }
}
