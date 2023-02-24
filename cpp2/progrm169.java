import java.io.*;
import java.util.*;

class progrm169
{
	public static void main(String arg[])
	{
		Scanner sobhj=new Scanner(System.in);
		int iCnt=0;
		System.out.println("Enter a string");
		String str=sobhj.nextLine();
		
		char arr[]=str.toCharArray();
		
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]>='a'&& arr[i]<='z')
			{
			iCnt++;
			}
		}
	System.out.println("string"+iCnt);
	}
	
}