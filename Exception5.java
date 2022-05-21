import java.lang*;
import java.util.*;

class Demo
{
  public int Division(int no1,int no2)throws ArithmeticException
  {
    return no1/no2;
  }

}

class Exception5
{
   public \static void main(String a[])
   {
     Scanner sobhj=new Scanner(System.in);
	 System.out.println("Enter first number");
     int no1=sobhj.nextInt();
	 System.out.println("Enter second number");
     int no2=sobhj.nextInt();
	 
	 Demo dobhj=new Demo();
	 try
	 {
	 int ret=dohj.Division(no1,no2);
	 System.out.println("Division"+ret);
	 }
	 catch(ArithmeticException)
	 {
	   System.out.println("Inside catch");
	 }

   }


}