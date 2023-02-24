import java.io.*;
import java.util.*;

class progrm170
{
	public static void main(String arg[])
	{
		Scanner sobhj=new Scanner(System.in);
		int iCnt=0;
		System.out.println("Enter a string");
		String str=sobhj.nextLine();
		
		String arr[]=str.split(" ");
		
		System.out.println("Number of words are:"+arr.length);
	
	}
}