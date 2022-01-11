// You are using Java
import java.util.*;
import java.io.*;
import java.lang.*;

class Main{
    public static void main(String[] arg){
        Scanner sc=new Scanner(System.in);
        double b=sc.nextDouble();
        double t=sc.nextDouble();
        double f=sc.nextDouble();
        double l=sc.nextDouble();
        
        double sum=b+t+f+l;
              double sum1 = Math.round(sum * 100.0) / 100.0;
 

        System.out.println("Total expenses : Rs."+ sum);
        System.out.println("Branding expeses percentage : "+ String.format("%.2f",(b/sum)*100) +"%");
        System.out.println("Tavel expenses percentage : "+(t/sum)*100 +"%");
        System.out.println("Food expenses percentage : "+(f/sum)*100+"%");
        System.out.println("Logistics expenses percentage : "+(l/sum)*100 +"%");
    }
}
