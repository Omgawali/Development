import java.lang.*;

class Base
{
	public int i,j;
	public void fun()                                   //def
	{ System.out.println("BAse fun "); }
	
	public void gun()                                    //def
	{ System.out.println("BAse gun "); }
	
	public void sun()                                      //def
	{ System.out.println("BAse sun "); }
}

class Derived extends Base
{
	public int x,y;
	public void fun()                               //overr
	{ System.out.println("Derived fun "); }
	
	public void sun()                              //overr
	{ System.out.println("Derived sun "); }
	
	public void run()                          //def
	{ System.out.println("Derived run "); }
}

class Virtual
{
	public static void main(String arg[])
	{
		Base obj=new Derived();
		obj.fun();
		obj.gun();
		obj.sun();
	//	obj.run();
	}
}