import java.lang.*;
import java.util.*;

//

class Array
{
	public int Arr[];
	
	public Array(int iSize)
	{
		Arr=new int[iSize];
	}

	public void Accept()
	{
		Scanner sobhj=new Scanner(System.in);
		System.out.println("Enter elements");
		
		for(int i=0;i<Arr.length;i++)
		{
			Arr[i]=sobhj.nextInt();
		}
	}
	
	public void Display()
	{
		System.out.println("Elements from array :");
		for(int i=0;i<Arr.length;i++)
		{
			System.out.println(Arr[i]);
		}
	}
}
class Searching extends Array
{
	public Searching(int isize)
	{
		super(isize);
	}
	
//linear search
//first occurance
	public int LinearSearch(int ino)
	{
		int i=0;
		for(i=0;i<Arr.length;i++)
		{
			if(Arr[i]==ino)
			{
				break;
			}
			
		}
		if(i==Arr.length)
		{
			return -1;
		}
		else
		{
			return i;
		}
	}
	
	//bidirectional search
	//donhji bahju ne \searchj krt yeil
	public int BiDirectionalSearch(int iNo)
	{
		int iStart=0;
		int iEnd=Arr.length-1;
		int iPos=-1;
		while(iStart<=iEnd)
		{
			if(Arr[iStart]==iNo||Arr[iEnd]==0)
			{
				break;
			}
			if(Arr[iEnd]==iNo)
			{
				iPos=iEnd;
				break;
			}
			iStart++;
			iEnd--;
		}
		return iPos;
	}
	
	//binarysearch
	//madun bhjangf 
	public int BinarySearch(int iNo)
	{
		int Start=0;
		int End=Arr.length-1;
		int Middle=0;
		
		while(Start<=End)
		{
			Middle=(Start+End)/2;
			
			if(Arr[Middle]==iNo)
			{
				break;
			}
			if(iNo>Arr[Middle])
			{
				Start=Middle+1;
			}
			else if(iNo<Arr[Middle])
			{
				End=Middle-1;
			}
		}
	     if(Arr[Middle]==iNo)
		 {
			 return Middle;
		 }
		 else
		 {
			 return -1;
		 }
	}
	
}

   
   


class progrm216
{
	public static void main(String argf[])
	{
		Scanner sobhj=new Scanner(System.in);
		System.out.println("Enter size of array");
		int size=sobhj.nextInt();
		Searching aobhj=new Searching(size);
		aobhj.Accept();
		aobhj.Display();
		
        System.out.println("Enter elemnts that you waant to search");	
		int iValue=sobhj.nextInt();
		int iRet=aobhj.BinarySearch(iValue);
		if(iRet==-1)
		{
			System.out.println("there is no such elemwnt");
		}
		else
		{
			System.out.println("Elements is there at index :"+iRet);
		}
		
	}
}