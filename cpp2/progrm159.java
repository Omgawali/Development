
import java.lang.*;
import java.io.*;
import java.util.*;

class progrm159
{
	public static void main(String argf[])
	{
		try
		{
		Scanner sohj=new Scanner(System.in);
		System.out.print("enter file name");  
		String Filename=sohj.nextLine();
	    File fobhj=new File(Filename);
		
		boolean bobj=fobhj.createNewFile();
		
		if(fobhj.exists())
		{
			long size=fobhj.length();
			System.out.print("file is"+size);
		}
		else
		{
			System.out.print("file is nott");
		}
		}
		catch(Exception obhj)
		{
			System.out.print(obhj);  
		}
	}
}