// You are using Java
// import java.util.Scanner;

// class Main{
try{
    BufferedWriter ou=new BufferedWriter(new FileWriter(fileName,true));
    out.write(str);
    out.close();
}
catch(IOException e){
    
}
}
    public static void main(String[] args)throws Exception{
       String  fileName="ss.txt";
       try{
           BufferedWriter out =new BufferedWriter(new FileWriter(fileName));
           out.write("Hello World");
           out.close();
       }
       catch(IOException e){
           
       }
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        // System.out.println(s);
        appendStrToFile(fileName,str);
        try{
            BufferedReader in=new BufferedReader(new FileReader("ss.txt"));
            String ms;
            while((ms=in.readLine())!=null){
                System.out.println(ms);
            }
        }
        catch(IOException e){
            
        }
    }
