import java.lang.*;
/*
class Object
{
//contents
}

*/
class Base
{
  public int i;
  public int j;  
  
  public void fun()
  {
	System.out.println("Inside base fun ");
  }
}

class Derived extends Base
{
	public int x;
	public int y;
	

	public void gun()
	{
		System.out.println("inside derived gun");
	}
}
class DerivedX extends Base
{
	
	public int a;

	public void sun()
	{
		System.out.println("inside derivedX sun");
	}
}
class Inheritance4
{
	
  public static void main(String a[])
  {
     System.out.println("inside main");
	 DerivedX dobj=new DerivedX();
	 dobj.sun();
  }
}