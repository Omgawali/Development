import java.util.*;
import java.lang.*;

/*
hello
op
h 
h e l
h e l l 
h e l l o
*/
class progrm196
{
	public static void main(String argf[])
	{
		Scanner sobhj=new Scanner(System.in);
	
		System.out.println("Enter string");
	    String str=sobhj.nextLine();
		
		char Arr[]=str.toCharArray();
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<=i;j++)
			{
				System.out.print(Arr[j]+" ");
			}
			System.out.println();
		}
		
	}
}