import java.lang.*;
import java.util.*;

class progrm202
{
	public static void main(String argf[])
	{
		Scanner sobhj=new Scanner(System.in);
		
		System.out.println("Enter number");
		int iNo=sobhj.nextInt();
		
		int iMask=0X0000000F;
		int iResult=0;
		
		iResult=iNo&iMask;
		
		if(iResult==iMask)
		{
				System.out.println("First nibble completely on");
		}
		else
		{
			System.out.println("off a");
		}

	}
}