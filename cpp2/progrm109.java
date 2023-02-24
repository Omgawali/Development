//ip 5
//op     forward          backward
//       12345            54321

import java.lang.*;
import java.util.*;

class Number
{
	private int iNo;
	
	public void Accept()
	{
		Scanner sobhj=new Scanner(System.in);
		System.out.println("Enter the value:");
	    this.iNo=sobhj.nextInt();	
	}
	
	
	public void DisplayF()
	{
		int iCnt=0;
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			System.out.println(""+iCnt);
		}
	}
	
	public void DisplayB()
	{
		int iCnt=0;
		for(iCnt=iNo;iCnt>=1;iCnt--)
		{
			System.out.println(""+iCnt);
		}
	}
};

class progrm109
{
	public static void main(String b[])
	{	
	Number nobhj=new Number();
    nobhj.Accept();
	nobhj.DisplayF();
	nobhj.DisplayB();

    }

}