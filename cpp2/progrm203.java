import java.lang.*;
import java.util.*;

class progrm203
{
	public static void main(String argf[])
	{
		Scanner sobhj=new Scanner(System.in);
		
		System.out.println("Enter number");
		int iNo=sobhj.nextlong();
		
	   long iMask=0XF000000F;
		 long iResult=0;
		
		iResult=iNo&iMask;
		
		if(iResult==iMask)
		{
			System.out.println("First nibble and last is completely on");
		}
		else
		{
			System.out.println("off a");
		}

	}
}