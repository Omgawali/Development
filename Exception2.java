import java.util.*;

class Exception2
{
	public static void main(String arg[])
	{
		int ans=0,no1=0,no2=0;
		Scanner sobhj=new Scanner(System.in);
		
		System.out.println("Enter first no");
		 no1=sobhj.nextInt();
		
		System.out.println("Enter second no");
		 no2=sobhj.nextInt();
		
		try
		{
		    ans=no1/no2;      //exception prone code
		}
		catch(ArithmeticException obhj)
		{
			System.out.println("Exception occured"+obhj);
		}
		System.out.println("Division is"+ans);
		sobhj.close();
	}
	
}