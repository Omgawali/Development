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

class progrm213
{
	public static void main(String argf[])
	{
		Array aobhj=new Array(5);
		aobhj.Accept();
		aobhj.Display();
		
	}
}