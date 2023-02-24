//ip 10
//op 2
//count factor

import java.lang.*;
import java.util.*;

class Number
{
	private int iNo;
	
	public void Accept()
	{
		Scanner sobhj=new Scanner(System.in);
		System.out.println("Enter thje value:");
		this.iNo=sobhj.nextInt();
	}

	
	public int CountFac()
	{
		int iCnt=0,iFactCnt=0;
		for(iCnt=2;iCnt<=iNo/2;iCnt++)
		{
			if(iNo%iCnt==0)
			{
				iFactCnt++;
			}
		}
		return iFactCnt;
	}
	
};

class progrm110
{
	public static void main(String b[])
	{
		int iRet=0;
		Number nobhj=new Number();
		nobhj.Accept();
		
	   iRet=nobhj.CountFac();
		System.out.println("fact count"+iRet);
	}
}