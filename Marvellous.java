import java.lang.*;

class Demo
{
	public int i;
	public int j;
	
	public Demo()
	{
		this.i=0;
		this.j=0;
	}
	
	public Demo(int x,int y)
	{
		this.i=x;
		this.j=y;
	}
    
    public void fun()
    {
		System.out.println("inside fun");
	}	
	
	public void gun()
    {
		System.out.println("inside gun");
	}	
}
class Marvellous
{
    public static void main(String arr[])
    {
        System.out.println("inside main");
		Demo obj=new Demo();
		obj.fun();     //fun(obj)
		obj.gun();    //gun(obj)
		System.out.println(obj.i);
		
		Demo objx=new Demo(11,21);
		objx.fun();     //fun(obj)
		objx.gun();    //gun(obj)
		System.out.println(objx.i);
    }
}