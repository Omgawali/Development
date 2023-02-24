import java.io.*;
import java.util.*;

class progrm171
{
	public static void main(String arg[])
	{
		Scanner sobhj=new Scanner(System.in);
		int iCnt=0;
		System.out.println("Enter a string");
		String str=sobhj.nextLine();
		
		String newstr=str.replaceAll("\\s+"," ");
		String arr[]=newstr.split(" ");
		
		System.out.println("Number of words are:"+arr.length);
	
	}
}