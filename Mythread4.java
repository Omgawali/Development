import java.lang.*;

class Marvellous extends Thread
{
	public void run()
	{
		for(int i=0;i<=1000;i++)
		{
		System.out.println("thread Scheduled"+Thread.currentThread().getName()+":"+i);
		}
	}
}

class Mythread4
{
	public static void main(String argf[])
	{
		Marvellous mobhj1=new Marvellous();
		Thread t1=new Thread(mobhj1,"First");
		
		Marvellous mobhj2=new Marvellous();
		Thread t2=new Thread(mobhj2,"Second");
		
		t1.start();
		t2.start();
		
	}
}