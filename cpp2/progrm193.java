import java.lang.*;
import java.util.*;
import MarvellousMatrix.Matrix;

class MyMatrix extends Matrix
{
	public MyMatrix(int a,int b)
	{
		super(a,b);
	}
	
    public void SwapCol()
	{
		int iTemp=0;
		
		for(int i=0;i<irow;i++)
		{
			for(int j=0;j<icol-1;j+=2)
			{
				iTemp=Arr[i][j];
				Arr[i][j]=Arr[i][j+1];
				Arr[i][j+1]=iTemp;
			}
		}
	}
}

class progrm193
{
	public static void main(String argf[])
	{
		Scanner sobhj=new Scanner(System.in);
	
		System.out.println("Enter row");
		int irow=sobhj.nextInt();
		
		System.out.println("Enter col");
		int icol=sobhj.nextInt();
		
		MyMatrix mobhj=new MyMatrix(irow,icol);
		mobhj.Accept();
		mobhj.Display();
		
		mobhj.SwapCol();
		System.out.println("Data after swap");
		mobhj.Display();
	}
}