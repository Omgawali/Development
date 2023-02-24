import java.util.*;
import java.lang.*;


class progrm198
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
		
		for(int i=Arr.length-2;i>=0;i--)
		{
			for(int j=0;j<=i;j++)
			{
				System.out.print(Arr[j]+" ");
			}
			System.out.println();
		}
	}
}