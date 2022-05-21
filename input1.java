import java.lang.*; 
import java.io.*;

class Input1
{
	public static void main(String ar[])throws IOException 
	{
		InputStreamReader iobhj=new InputStreamReader(System.in);
		BufferedReader	bobhj=new BufferedReader(iobhj);
		
		System.out.println("Enter your name");
		String name=bobhj.readLine();
		
		System.out.println("Your name is "+name);
		
	}
}