

import java.lang.*;
import java.io.*;
import java.util.*;

public class Assignment42q1
{
	public static void main(String arg[])
    {
		try
		{
			Scanner sc= new Scanner(System.in);    //System.in is a standard input stream  
              System.out.print("enter file name");  
			File file=new File("C:\\Users\\Divya\\Desktop\\pp\\LB\\1prgrm\\"+sc.nextLine());
			FileInputStream fis=new FileInputStream(file);
			System.out.println("File contents");
			int r=0;
			while((r=fis.read())!=-1)
			{
				System.out.print((char)r);
			}
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
	}
}