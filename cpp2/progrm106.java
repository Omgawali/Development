//ip 6
//op   6 is perfect

import java.lang.*;
import java.util.*;

class Number
{
	private int iNo;
	
	public void Accept()
	{
		Scanner sobhj=new Scanner(System.in);
		System.out.println("Enter the values");
		this.iNo=sobhj.nextInt();
	}
	
	public void Display()
	{
		System.out.println("Value is"+this.iNo);
	}
	
	public int additionoffactor()
	{
		int iCnt=0,iSum=0;
		for(iCnt=0;iCnt<=iNo/2;iCnt++)
		{
			iSum=iSum+iCnt;
		}
		return iSum;
	}
	public boolean Perfect()
	{
		int Ans=0;
		Ans=additionoffactor();
		if(Ans==iNo)
		{
			return true;
		}
		else
		{
            return false;
		}
	}
};

class progrm106
{
	public static void main(String b[])
	{
		boolean Ret;
	    Number nobhj=new Number();
		nobhj.Accept();
		nobhj.Display();
		Ret=nobhj.Perfect();
		if(Ret==true)
		{
			System.out.println("is perfect");
		}
		else
		{
			System.out.println("is not perfect");
		}
	}
}