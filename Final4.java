import java.lang.*;

final class Base
{
  public void fun()
  {
   System.out.println("Base fun");
  }
}

class Dervied             
{
  public Base bobhj=new Base();           //composition
  
  public void gun()
  {
   System.out.println("Derived gun");
  }
}

class Final4
{

   public static void main(String ar[])
   {
	Dervied dobhj=new Dervied();
    dobhj.bobhj.fun();
	dobhj.gun();	
   }
}