
import java.io.*;
import java.util.*;

class progrm183
{
	public static void main(String arg[])
	{
		Scanner sobhj=new Scanner(System.in);
		
		System.out.println("Enter a string");
		String str1=sobhj.nextLine();
		
		str1=str1.toLowerCase();
	    
		System.out.println("Enter a string");
		String str2=sobhj.nextLine();
		
		str2=str2.toLowerCase();
		
		
		char arr[]=str1.toCharArray();
	    char brr[]=str2.toCharArray();
		
		Arrays.sort(arr);
		Arrays.sort(brr);
		
		if(Arrays.equals(arr,brr))
		{
			System.out.println("String are anagram");
		}
		else
		{
			System.out.println("String are not anagram");
		}
	
	}
}