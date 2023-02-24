
import java.lang.*;
import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;

class progrm161
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
			FileInputStream fiobhj=new FileInputStream(fobhj);
			byte buffer[]=new byte[100];
			int ret=0;
			
			while((ret=fiobhj.read(buffer))!=-1)
			{
				String str1=new String(buffer,StandardCharsets.UTF_8);
				System.out.print(str1);
			}
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