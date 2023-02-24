
import java.lang.*;
import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;

class progrm163
{
	public static void main(String argf[])
	{
		try
		{
		Scanner sohj=new Scanner(System.in);
		System.out.print("enter dir name");  
		String Foldername=sohj.nextLine();
		
		File dobhj=new File(Foldername);
		
		File allfiles[]=dobhj.listFiles();
		
		for(int i=0;i<allfiles.length;i++)
		{
			System.out.println(allfiles[i].getName());  
		}
	
		}
		catch(Exception obhj)
		{
			System.out.print(obhj);  
		}
	}
}