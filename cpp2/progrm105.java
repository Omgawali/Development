//ip 10
//op  1    2     5

import java.lang.*;
import java.util.*;

class Number
{
	private int iNo;
	
	public void Accept()
	{
		Scanner sobhj=new Scanner(System.in);
		System.out.println("Enter the value");
		this.iNo=sobhj.nextInt();
	}
	
	public void Display()
	{
		System.out.println("the value "+this.iNo);
	}
	
	public void DisplayFactors()
	{
		int iCnt=0;
		for(iCnt=1;iCnt<=iNo/2;iCnt++)
		{
			if(iNo%iCnt==0)
			{
				System.out.println(""+iCnt);
			}
		}
	}
}

class progrm105
{
	public static void main(String b[])
	{
		Number nobhj=new Number();
		
		nobhj.Accept();
		nobhj.Display();
		
		nobhj.DisplayFactors();
	}
}