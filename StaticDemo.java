import java.lang.*;

class Demo
{
  public int i;
  public int j;
  public static  int k;
  
  
  public Demo()
  {
	  System.out.println("Inside constructor");
  }
  
  public void fun()
  {
	  System.out.println("inside non s");
      System.out.println(this.i);
	  System.out.println(this.j);
	  System.out.println(this.k);
  }
  
  public static void gun()
  {
	  System.out.println("inside gun");
	   System.out.println(k);
  }
  

}

class StaticDemo
{
  public static void main(String a[])
  {
    Demo.gun();
	Demo obj;
	obj=new Demo();
	obj.fun();
  
   System.out.println(obj.i);
   System.out.println(obj.j);
  }
}