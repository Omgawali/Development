import java.lang.*;

class Base
{
  public int i;
  public int j;  
  
  public Base()
  {
	System.out.println("Inside base constructor");
	this.i=10;
	this.j=20;
  }
  public Base(int a,int b)
  {
   this.i=a;
   this.j=b;
  }
  
  public void fun()
  {
	System.out.println("Inside base fun ");
  }
}

class Derived extends Base
{
	public int x;
	public int y;
	
	public Derived()
	{
		super(11,21);
		System.out.println("inside derived constructor");
		this.x=10;
	    this.y=20;
	}
	
	public void sun()
	{
		
		System.out.println("inside derived sun");
		System.out.println(super.i);
		super.fun();
	}
}
class Inheritance2
{
	
  public static void main(String a[])
  {
     System.out.println("inside main");
	 Derived dobj=new Derived();
	 dobj.sun();
  }
}