//

import java.lang.*;

class Marvellous extends Thread
{
	public void run()
	{
		System.out.println("in\side thread"+Thread.currentThread().getName());
	}
}

class Mythread2
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
