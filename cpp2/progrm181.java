
import java.io.*;
import java.util.*;

class progrm181
{
	public static void main(String arg[])
	{
		Scanner sobhj=new Scanner(System.in);
		
		System.out.println("Enter a string");
		String str1=sobhj.nextLine();
		
		str1=str1.toLowerCase();
	    char arr[]=str1.toCharArray();
		
		int Frequency1[]=new int[26];
		
			
		System.out.println("Enter a string");
		String str2=sobhj.nextLine();
		
		str2=str2.toLowerCase();
	    char brr[]=str2.toCharArray();
		int Frequency2[]=new int[26];
		
		int i=0;
		for(i=0;i<arr.length;i++)
		{
			Frequency1[arr[i]-'a']++;
			Frequency2[brr[i]-'a']++;
		}
		
		
		
		for(i=0;i<Frequency1.length;i++)
		{
			if(Frequency1[i]!=Frequency2[i])
			{
				break;
			}
		}
		
		if(i==26)
		{
			System.out.println("Anagram a");
		}
		else
		{
			System.out.println("Anagram nhi a");
		}
	}
}