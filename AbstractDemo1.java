import java.lang.*;

abstract class Demo
{
   public int  i,j;
   
   public Demo()
   {
    System.out.println("Base con\structor");
	};
	
	public void fun()
	{
	 System.out.println("Demo fun"); 
	 
	}
	public abstract void gun();
}

class Hello extends Demo
{
   public int x;
   public Hello()
   {
     System.out.println("Hello con\structor");
   }
   public void sun()
   {
     System.out.println("Hello sun");  
   }
  public void gun()
   {
     System.out.println("Hello gun");  
   }   
}

class AbstractDemo1
{
  public static void main(String a[])
  {
 //   Demo dobhj;
//	dobhj =new Demo();
	
	Hello hobj =new Hello();
	hobj.fun();
	hobj.gun();
	hobj.sun();
	}

}	