import java.util.Scanner;
public class Main {
   public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter a string value: ");
      int c=0;
    //   String str = sc.nextLine();
      String[] s=new String[50];
      s[c] = sc.nextLine();
      
      while(!s[c].equals("q")){
       c++;
       s[c] = sc.nextLine();
      }
      System.out.println(c);
   }
}
