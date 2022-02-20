
import java.util.Scanner;  // Import the Scanner class

public class Main
{
	public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);  // Create a Scanner object
    int n=sc.nextInt();
    String s[]=new String[n+1];
    int a[]=new int[n+1];
    for(int i=0;i<n+1;i++){
     s[i]=sc.nextLine();
     a[i]=s[i].length();
    }
    for (int i = 0; i < n+1; i++) {
         for (int j = i + 1; j < n+1; j++) {
            // Checking elements
            int temp = 0;
            if (a[j] < a[i]) {
                // Swapping
                temp = a[i];
                a[i] =a[j];
                a[j] = temp;
            }
        }
    }
int c=0;

    while(c<n+1){
         for(int i=0;i<n+1;i++){
             if(s[i].length()==a[c]){
                 System.out.println(s[i]);
                }
        }
         c++;
    }
        
}
}
