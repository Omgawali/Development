import java.lang.*;
import java.util.*;


class progrm189
{
	public static void main(String argf[])
	{
		Scanner sobhj=new Scanner(System.in);
		System.out.println("Enter row");
		int irow=sobhj.nextInt();
		
		System.out.println("Enter col");
		int icol=sobhj.nextInt();
		
		int Arr[][]=new int[irow][icol];
		
		System.out.println("entter thje data");
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<Arr[i].length;j++)
			{
				Arr[i][j]=sobhj.nextInt();
			}
		}
			System.out.println("elements are");
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<Arr[i].length;j++)
			{
				System.out.print(Arr[i][j]+" ");
			}
			System.out.println(" ");
		}
		
		Arr=null;
		System.gc();
	}
}