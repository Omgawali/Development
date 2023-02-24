import java.lang.*;
import java.util.*;

class progrm205
{
	public static void main(String argf[])
	{
		Scanner sobhj=new Scanner(System.in);
		
		System.out.println("Enter number");
		int iNo=sobhj.nextInt();
		int iCnt=0;
		int iMask=0X00000001;
		int iResult=0;
		
		for(int i=1;i<=32;i++)
		{
			iResult=iNo&iMask;
			if(iResult==iMask)
			{
				System.out.println(i);
				iCnt++;
			}
			iMask=iMask<<1;
		}
	 System.out.println("on bits"+iCnt);
	}
	
}	