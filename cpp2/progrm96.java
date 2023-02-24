


import java.lang.*;
import java.util.*;

class Number
{
	private int iNo;
	
	public void Accept()
	{
		Scanner sobhj=new Scanner(System.in);
		System.out.println("Enter number");
		this.iNo=sobhj.nextInt();
	}
	public void Display()
	{
		System.out.println("value is:"+this.iNo);
	}
	public int Factorial()
	{
	int iFact=1;
	
	for(int iCnt=1;iCnt<=iNo;iCnt++)
	{
		iFact=iFact*iCnt;
	}
	return iFact;
	}
}
class progrm96
{
	public static void main(String b[])
	{
		Number nobhj=new Number();
		int iRet=0;
		nobhj.Accept();
		nobhj.Display();
		
		iRet=nobhj.Factorial();
		System.out.println("Fact is:"+iRet);
	}
}