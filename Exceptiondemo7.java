import java.io.*;


public class Exceptiondemo7
 {
   public static void main(String[] args)
    {
        try
        {
    BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

    System.out.println("enter your name:");
    String name = bobj.readLine();

    System.out.println("enter your age:");
    int Age = Integer.parseInt(bobj.readLine());

    System.out.println("your name:"+name);
    System.out.println("your age:"+Age);
        }
catch(Exception obj) 
{

}
  }    
}
