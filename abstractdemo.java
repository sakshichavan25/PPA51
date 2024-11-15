
abstract class Arithematic
{
    abstract public int addition(int A ,int B);
    abstract public int substraction(int A ,int B);
    public int multiplication(int A ,int B)
    {
        return A* B;
    }
}

class marvellous extends Arithematic
{
    public int addition(int A, int B)
    {
        return A+B;
    }
    public int substraction(int A, int B)
    {
        return A-B;
    }
}

public class abstractdemo
 {
   public static void main(String args[]) 
   {
    marvellous mobj = new marvellous();

    System.out.println(mobj.addition(11, 10));
    System.out.println(mobj.substraction(11, 10));
    System.out.println(mobj.multiplication(11, 10));
   } 
}
