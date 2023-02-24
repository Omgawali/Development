import java.io.*;
import java.util.*;

class progrm184
{
	public static void main(String arg[])
	{
		Scanner sobhj=new Scanner(System.in);
		int i=0;
		int j=0;
		System.out.println("Enter number of rows");
	    int irow=sobhj.nextInt();
		
		System.out.println("Enter number of cols");
	    int icol=sobhj.nextInt();
		
		int Arr[][]=new int[irow][icol];
		
		System.out.println("Enter the elemnts");
		for(i=0;i<Arr.length;i++)
		{
			for(j=0;j<Arr[i].length;j++)
			{
				Arr[i][j]=sobhj.nextInt();
			}
		}
		
		for(i=0;i<Arr.length;i++)
		{
			for(j=0;j<Arr[i].length;j++)
			{
				System.out.println(Arr[i][j]+" ");
			}
			System.out.println();
		}
	}
}	