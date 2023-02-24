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
		
	}
	
	//efficient bubble sort
	//increasingf order mdhje \sort
	public void BubbleSort(char type)
	{
		int i=0,j=0,temp=0;
		
		boolean Swap=false;
		if(type=='I'|| type=='i')
		{
		for(i=0;i<Arr.length;i++)
		{
			Swap=false;
			for(j=0;j<Arr.length-i-1;j++)
			{
				if(Arr[j]>Arr[j+1])
				{
					temp=Arr[j];
					Arr[j]=Arr[j+1];
					Arr[j+1]=temp;
					Swap=true;
				}
			}
			System.out.print("Pass"+(i+1));
			Display();
			if(Swap==false)
			{
				break;
			}
		}
		}
		else if(type=='d'||type=='D')//descendingf order mdhje \sort
		{
				for(i=0;i<Arr.length;i++)
		{
			Swap=false;
			for(j=0;j<Arr.length-i-1;j++)
			{
				if(Arr[j]<Arr[j+1])
				{
					temp=Arr[j];
					Arr[j]=Arr[j+1];
					Arr[j+1]=temp;
					Swap=true;
				}
			}
			System.out.print("Pass"+(i+1));
			Display();
			if(Swap==false)
			{
				break;
			}
		}
		}
	}
	
	public void InsertionSort()
	{
		
	}
	
	public void SelectionSort()
	{
		
	}
	
}

class progrm218
{
	public static void main(String argf[])
	{
		Scanner sobhj=new Scanner(System.in);
		System.out.println("Enter size of array");
		int size=sobhj.nextInt();

        Array aobhj=new Array(size);
		aobhj.Accept();
		aobhj.Display();
		aobhj.BubbleSort('i');
		System.out.println("Data after sort");
		aobhj.Display();
		
	}
}