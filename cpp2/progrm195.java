import java.util.*;


/*
hello
op
h e l l o
h e l l o
h e l l o
h e l l o
*/
class progrm195
{
	public static void main(String argf[])
	{
		Scanner sobhj=new Scanner(System.in);
	
		System.out.println("Enter string");
	    String str=sobhj.nextLine();
		
		char Arr[]=str.toCharArray();
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<Arr.length;j++)
			{
				System.out.print(Arr[i]+" ");
			}
			System.out.println();
		}
		
	}
}