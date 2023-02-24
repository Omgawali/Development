import java.lang.*;
import java.util.*;


interface MarvellousSort
{
	public void Accept();
	public void Display();
	public void BubbleSort();
	public void InsertionSort();
	public void SelectionSort();
}     	 

class Array implements MarvellousSort
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
			System.out.println(Arr[i]+" ");
		}
		System.out.println();
	}
	
	public void BubbleSort()
	{
		int i=0,j=0,temp=0;
		
		for(i=0;i<Arr.length-1;i++)
		{
			for(j=0;j<Arr.length-i-1;j++)
			{
				if(Arr[j]>Arr[j+1])
				{
					temp=Arr[j];
					Arr[j]=Arr[j+1];
					Arr[j+1]=temp;
				}
			}
			
		}
	}
	
	public void InsertionSort()
	{
		
	}
	
	public void SelectionSort()
	{
		int i=0,j=0,min_index=0,temp=0;
		
		for(i=0;i<Arr.length;i++)
		{
			min_index=i;
			for(j=0;j<Arr.length;j++)
			{
				if(Arr[min_index]>Arr[j])
				{
				min_index=j;
				}
			}
		}
		temp=Arr[i];
		Arr[i]=Arr[min_index];
		Arr[min_index]=temp;
	}
	
}

class progrm219
{
	public static void main(String argf[])
	{
		Scanner sobhj=new Scanner(System.in);
		System.out.println("Enter size of array");
		int size=sobhj.nextInt();

        Array aobhj=new Array(size);
		aobhj.Accept();
		aobhj.Display();
		aobhj.BubbleSort();
		System.out.println("Data after sort");
		aobhj.Display();
		
	}
}