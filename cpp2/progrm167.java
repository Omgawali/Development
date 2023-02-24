import java.lang.*;
import java.util.*;
import java.io.*;

class progrm167
{
	public static void main(String argf[])
	{
		try
		{
		Scanner sobhj=new Scanner(System.in);
		
		System.out.println("Enter packed file name");
	    
		String Packfile=sobhj.nextLine();
		
		File fobhj=new File(Packfile);
		
		FileInputStream fiobhj=new FileInputStream(fobhj);
		byte Headerarray[]=new byte[100];
		
		fiobhj.read(Headerarray,0,100);
		
		String HeaderString=new String(Headerarray);
		System.out.println(HeaderString);
		
		String tokens[]=HeaderString.split(" ");
		System.out.println(tokens[0]);
		System.out.println(tokens[1]);
		
		
		}
		catch(Exception obhj)
		{
			System.out.println(obhj);
		}
	}
}