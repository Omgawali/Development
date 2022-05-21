import java.lang.*;

class Base
{
  public void fun()
  {
    System.out.println("Base fun");
  }
  public final void gun()
  {
    System.out.println("Base gun");
  }  
}

class Dervied extends Base
{
  public void fun()           //overr
  {
    System.out.println("Base fun");
  }
 // public void gun()                          //na
  //{
//    System.out.println("Base gun");
 // } 
}

class Final2
{
   public static void main(String a[])
   {
	   Derived dobhj=new Derived();
	   dobhj.fun();
	   dobhj.gun();
   }
}