import java.io.*;
import java.util.*;

class progrm175
{
	public static void main(String arg[])
	{
		Scanner sobhj=new Scanner(System.in);
		
		System.out.println("Enter a string");
		String str=sobhj.nextLine();
		
		String newstr=str.replaceAll("\\s+"," ");
		String newstr2=newstr.trim();
		
		String arr[]=newstr2.split(" ");
		
	    for(int i=0;i<arr.length;i++)
		{
			StringBuffer sb=new StringBuffer(arr[i]);
			System.out.println(sb.reverse());
		}
		
	}
}