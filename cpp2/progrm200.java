import java.util.*;
import java.lang.*;


class progrm200
{
	public static void main(String argf[])
	{
		Scanner sobhj=new Scanner(System.in);
	
		System.out.println("Enter no");
		int no=sobhj.nextInt();
		String str=Integer.toString(no);
		char arr[]=str.toCharArray();
	    
		for(int i=arr.length-1;i>=0;i--)
		{
			for(int j=0;j<=i;j++)
			{
				System.out.print(arr[j]+" ");
			}
			System.out.println();
		}
	}
}