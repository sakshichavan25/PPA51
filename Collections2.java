import java.util.*;

class Collections2
{
   public static void main(String a[]) 
   {
   
     Stack <String> sobj = new Stack<String>();

     sobj.push("c programming");
     sobj.push("c++ programming");
     sobj.push("java programming");
     sobj.push("python programming");

      System.out.println(sobj);

      String ret = sobj.pop();

      System.out.println(ret);

      System.out.println(sobj);

     }
}