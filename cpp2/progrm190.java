import java.lang.*;
import java.util.*;


class progrm190
{
	public static void main(String argf[])
	{
	Scanner sobhj=new Scanner(System.in);
		
				System.out.println("Enter row");
		int irow=sobhj.nextInt();
		
		System.out.println("Enter col");
		int icol=sobhj.nextInt();
		
		Matrix mobhj=new Matrix(irow,icol);
		mobhj.Accept();
		mobhj.Display();
	}
}

class Matrix
{
	public int irow;
	public int icol;
	public int Arr[][];
	
	public Matrix(int a,int b)
	{
		this.irow=a;
		this.icol=b;
		
		Arr=new int[irow][icol];
	}
	
	public void Accept()
	{
			Scanner sobhj=new Scanner(System.in);
		
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<Arr[i].length;j++)
			{
				Arr[i][j]=sobhj.nextInt();
			}
		}
	}
	
	public void Display()
	{
		System.out.println("elements are");
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<Arr[i].length;j++)
			{
				System.out.print(Arr[i][j]+" ");
			}
			System.out.println(" ");
		}
	}
	
}