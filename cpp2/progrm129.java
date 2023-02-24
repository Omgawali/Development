//
import java.lang.*;
import java.util.*;

class Bitwise
{
	public void DisplayBinary(int no)
	{
		int iDigit=0;
		while(no!=0)
		{
			iDigit=no%2;
			System.out.print(iDigit);
			no=no/2;
		}
		System.out.println();
	}
}
class progrm129
{
	public static void main(String arg[])
	{
		Scanner sobhj=new Scanner(System.in);
		System.out.println(":Enter number ");
		
		int value=sobhj.nextInt();
		System.out.println(value);
		
		Bitwise bobhj=new Bitwise();
		bobhj.DisplayBinary(value);
	}
}