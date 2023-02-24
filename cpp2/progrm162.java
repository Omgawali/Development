
import java.lang.*;
import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;

class progrm162
{
	public static void main(String argf[])
	{
		try
		{
		Scanner sohj=new Scanner(System.in);
		System.out.print("enter file name");  
		String Filename=sohj.nextLine();
		
	    File fobhj=new File(Filename);
		
		System.out.print("enter file name");  
		String newfile=sohj.nextLine();
		
		
	    File fobhjnew=new File(newfile);
		boolean bobj1=fobhjnew.createNewFile();
		
		if(fobhj.exists())
		{
			FileInputStream fiobhj=new FileInputStream(fobhj);
			FileOutputStream foobhj=new FileOutputStream(fobhjnew);
			byte buffer[]=new byte[100];
			int ret=0;
			
			
			while((ret=fiobhj.read(buffer))!=-1)
			{
			   foobhj.write(buffer,0,ret);
			}
		}
		else
		{
			System.out.print("file is nott");
		}
		}
		catch(IOException obhj)
		{
			System.out.print(obhj);  
		}
	}
}