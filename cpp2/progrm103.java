//summation of previous no
import java.lang.*;
import java.util.*;

class Number
{
	private int iNo;
	
	public void Accept()
	{
		Scanner sobhj=new Scanner(System.in);
		System.out.println("Enter a number");
		this.iNo=sobhj.nextInt();
	}
	
	public void Display()
	{
		System.out.println("Value is"+this.iNo);
		
	}
	
	public int Summation()
	{
		int iSum=0,iCnt=0;
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			iSum=iSum+iCnt;
		}
		
		return iSum;
	}
}

class progrm103
{
	public static void main(String b[])
	{
		int iRet=0;
		Number nobhj=new Number();
		
		nobhj.Accept();
		nobhj.Display();
		iRet=nobhj.Summation();
		System.out.println("Summation is"+iRet);
	}
}