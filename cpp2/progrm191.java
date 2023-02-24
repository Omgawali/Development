import java.lang.*;
import java.util.*;
import MarvellousMatrix.Matrix;

class MyMatrix extends Matrix
{
	public MyMatrix(int a,int b)
	{
		super(a,b);
	}
	
	public int Maximum()
	{
		int iMax=Arr[0][0];
		
		for(int i=0;i<irow;i++)
		{
			for(int j=0;j<icol;j++)
			{
				if(Arr[i][j]>iMax)
				{
					iMax=Arr[i][j];
				}
			}
		}
		return iMax;
	}
	
	public int Minimum()
	{
		int iMin=Arr[0][0];
		
		for(int i=0;i<irow;i++)
		{
			for(int j=0;j<icol;j++)
			{
				if(Arr[i][j]<iMin)
				{
					iMin=Arr[i][j];
				}
			}
		}
		return iMin;
	}
	
}

class progrm191
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
		
		int iret=mobhj.Maximum();
		System.out.println("iret"+iret);
	
	    iret=mobhj.Minimum();
		System.out.println("iret"+iret);
	}
	}

