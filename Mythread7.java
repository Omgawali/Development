import java.lang.*;
import java.util.*;
class Marvellous
{
	public int Arr[];
	
	public Marvellous(int size)
	{
	    Arr=new int[size];
    }
	
	public void Accept()
	{
		Scanner sobhj=new Scanner(System.in);
		System.out.println("enter no:");
		for(int i=0;i<this.Arr.length;i++)
		{
			this.Arr[i]=sobhj.nextInt();
		}
	}
	public void Display()
	{
	    System.out.println("Data gfrom array is:");
     	for(int i=0;i<this.Arr.length;i++)
		{
			System.out.println(this.Arr[i]);
		}
	}
	
	
    public void DisplayEven()
	{
		for(int i=0;i<this.Arr.length;i++)
		{
			if(this.Arr[i]%2==0)
			{
				System.out.println(this.Arr[i]);
			}
		}
	}
}

class Demo extends Thread
{   
    public Marvellous mref;
	
	public Demo(Marvellous obhj)
	{
		this.mref=obhj;
	}
	public void run()               
	{
       this.mref.DisplayEven();
	}
}

class Mythread7 
{
    public static void main(String ar[]) throws Exception
	{
		Marvellous mobhj1=new Marvellous(5);
		Marvellous mobhj2=new Marvellous(8);
		
		mobhj1.Accept();
		mobhj1.Display();
		
		mobhj2.Accept();
		mobhj2.Display();
		
		Demo dobhj1=new Demo(mobhj1);
		Demo dobhj2=new Demo(mobhj2);
		
		Thread t1=new Thread(dobhj1);
		Thread t2=new Thread(dobhj2);
		
		t1.start();
		t2.start();
		
		t1.join();
		t2.join();
		
	}
}