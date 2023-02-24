

import java.lang.*;
import java.util.*;

class ArrayX
{
	private int Arr[];
	
	public ArrayX(int iNo)
	{
		Arr=new int[iNo];
	}
	
	public void Accept()
	{
		Scanner sobhj=new Scanner(System.in);
		System.out.println("Enter value\n");
		
		for(int iCnt=0;iCnt<Arr.length;iCnt++)
	    {
			Arr[iCnt]=sobhj.nextInt();
		}
	}
	
	public void Display()
	{
		int iCnt=0;
		
		System.out.println("Elemnts of array are:");
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
	}
	
	public int Summation()
	{
		int iCnt=0,iSum=0;
			for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			iSum=iSum+Arr[iCnt];
		}
		return iSum;
	}
}

class progrm99
{
	public static void main(String b[])
	{
		Scanner sobhj=new Scanner(System.in);
        int iLength=0;

         System.out.println("enter thje value gfor constructor");
         iLength=sobhj.nextInt();
		 
		 ArrayX obhj=new ArrayX(iLength);
		 
		 obhj.Accept();
		 obhj.Display();
		 
		int iRet=obhj.Summation();
		 System.out.println("Add is"+iRet);
	}
}