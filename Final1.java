import java.lang.*;


class Demo
{
	public int i;
	public final int j=20;
	public final int k;
	
	public Demo()
	{
		this.i=10;
        this.k=30; 		
	}
	
	public Demo(int a,int b)
	{
		this.i=a;
        this.k=b; 		
	}
	
	public void fun()
	{
		i++;
		//j++;   //na
		//k++;   //na
	}
}
class Final1 
{
  public static void main(String  ar[])
  {
	Demo obhj=new Demo();
    obhj.fun();
	System.out.println(obhj.i);
		System.out.println(obhj.j);
			System.out.println(obhj.k);
    Demo obhj1=new Demo(11,21);
    obhj1.fun();	
	System.out.println(obhj1.i);
		System.out.println(obhj1.j);
			System.out.println(obhj1.k);	
  }  


}