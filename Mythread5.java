
import java.lang.*;

class Demo extends Thread
{
	public void run()               //Running state
	{
        for(int i=0;i<10;i++)
		{
			System.out.println("value of i  "+i);
			try
			{
			Thread.sleep(1000);
			}
			catch(Exception obhj)
			{
			}
		}
	}
}

class Mythread5 
{
    public static void main(String ar[]) throws Exception
	{
		Demo obhj1=new Demo();
		Thread t1=new Thread(obhj1);     		//new state
		Demo obhj2=new Demo();
		Thread t2=new Thread(obhj2);      
		t1.start();		            //runnable state
		
		t1.join();
		
		t2.start();
	}
}