import java.lang.*; 
import java.io.*;

class Input2
{
	public static void main(String ar[])
	{
		InputStreamReader iobhj=new InputStreamReader(System.in);
		BufferedReader	bobhj=new BufferedReader(iobhj);
		try
		{
		System.out.println("Enter your name");
		String name=bobhj.readLine();
		
		System.out.println("Your name is "+name);
		
		System.out.println("Enter your age");
		int age=Integer.parseInt(bobhj.readLine());
		
		System.out.println("Your age is "+age);
		}
		catch(IOException obj)
		{
			System.out.println("Exception occurs");
		}
		finally 
		{
			iobhj=null;
			bobhj=null;
			
		}
		
	}
}