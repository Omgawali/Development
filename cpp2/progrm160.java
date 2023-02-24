
import java.lang.*;
import java.io.*;
import java.util.*;

class progrm160
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
			BufferedReader bopbhj=new BufferedReader(new FileReader(fobhj));
			String str;
			
			while((str=bopbhj.readLine())!=null)
			{
				System.out.println(str);  
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