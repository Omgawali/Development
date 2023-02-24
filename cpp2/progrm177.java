//listen silent anagram

import java.io.*;
import java.util.*;

class progrm177
{
	public static void main(String arg[])
	{
		Scanner sobhj=new Scanner(System.in);
		
		System.out.println("Enter a string");
		String str=sobhj.nextLine();
		
		str=str.toLowerCase();
	    char arr[]=str.toCharArray();
		int Frequency[]=new int[26];
		int i=0;
		for(i=0;i<arr.length;i++)
		{
			Frequency[arr[i]-'a']++;
		}
		
		for(i=0;i<Frequency.length;i++)
		{
			System.out.println(Frequency[i]);
		}
		
	}
}