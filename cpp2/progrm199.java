import java.util.*;
import java.lang.*;


class progrm199
{
	public static void main(String argf[])
	{
		Scanner sobhj=new Scanner(System.in);
	
		System.out.println("Enter no");
		int no=sobhj.nextInt();
		String str=Integer.toString(no);
		char arr[]=str.toCharArray();
	    
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr.length;j++)
			{
				System.out.print(arr[j]+" ");
			}
			System.out.println();
		}
		}
	}
