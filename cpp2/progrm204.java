import java.lang.*;
import java.util.*;

class progrm204
{
	public static void main(String argf[])
	{
		Scanner sobhj=new Scanner(System.in);
		
		System.out.println("Enter number");
		int iNo=sobhj.nextInt();
		
		System.out.println("Enter starting");
		int iStart=sobhj.nextInt();
		
		System.out.println("Enter end");
		int iend=sobhj.nextInt();
		
		int iMask1=0Xffffffff;
    	int iMask2=0Xffffffff;
		
		int iMask=0;
		
		iMask1=iMask1<<(iStart-1);
		iMask2=iMask2>>(32-iend);
		
		iMask=iMask1&iMask2;
		
		System.out.println();
		int iResult=0;
		iResult=iNo&iMask;
		if(iResult==iNo)
		{
			System.out.println("completely on");
		}
		else
		{
			System.out.println("off a");
		}
		
	}
}	