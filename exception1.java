import java.util.*;

class Exception1
{
	public static void main(String arg[])
	{
		Scanner sobhj=new Scanner(System.in);
		
		System.out.println("Enter first no");
		int no1=sobhj.nextInt();
		
		System.out.println("Enter second no");
		int no2=sobhj.nextInt();
		
		int ans=no1/no2;
		
		System.out.println("Division is"+ans);
		sobhj.close();
	}
	
}