//no is divisible by 5 or not

import java.lang.*;
import java.util.*;

class Number
{
	private int iNo;
	
	public void Accept()
	{
		Scanner sobhj=new Scanner(System.in);
		System.out.println("Enter the value ");
		this.iNo=sobhj.nextInt();
	}
	
	public void Display()
	{
		System.out.println("Value is"+this.iNo);
	}
	
	public boolean Check()
	{
		if((iNo%5)==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class progrm104
{
	public static void main(String b[])
	{
		boolean iRet;
		Number nobhj=new Number();
		nobhj.Accept();
		nobhj.Display();
		
		iRet=nobhj.Check();
		if(iRet==true)
		{
		System.out.println("divisible by 5");
		}
		else
		{
			System.out.println("Not divisible ny 5");
		}

	}
}