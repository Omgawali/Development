import java.util.*;
import java.lang.*;


class progrm201
{
	public static void main(String argf[])
	{
		Scanner sobhj=new Scanner(System.in);
	
		System.out.println("Enter no");
		int no=sobhj.nextInt();
		int iDigit=0;
	/*	while(no!=0)
		{
			iDigit=no%10;
			System.out.println(""+no);
			no=no/10;
			no+=iDigit;
		}
		*/
		
		while(true)
		{
		while(no!=0)
		{
			iDigit=iDigit+(no%10);
			no=no/10;
		}
		no=iDigit;
		iDigit=0;
		if(no<10)
		{
			break;
		}
		}
		System.out.println(no);
	}
}