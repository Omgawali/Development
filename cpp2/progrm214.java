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
//linear search
//first occurance
class Searching extends Array
{
	public Searching(int isize)
	{
		super(isize);
	}
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
	
}


class progrm214
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
		int iRet=aobhj.LinearSearch(iValue);
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