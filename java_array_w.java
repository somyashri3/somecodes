
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		int p[]=new int[11];
		
		for (int i=0;i<11;i++){
		   p[i]=s.nextInt(); 
		}
		
		
	 int count=0;
         
    
        for (int i=0;i<11;i++)
        {
            if (p[i] >=18 && p[i] <=20)
            {
                count++;
            }
        }
        System.out.print(count);
	}
}

