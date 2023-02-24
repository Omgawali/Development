

import java.lang.*;
import java.util.*;

class Pattern
{
	private int iRow,iCol;
	
	public Pattern(int a,int b)
	{
		iRow=a;
		iCol=b;
	}
	
	public void DisplayPattern()
	{
		int i=0,j=0;
		
		for(i=0;i<iRow;i++)
		{
			for(j=0;j<iCol;j++)
			{
				System.out.print("*\t");
			}
			         
			System.out.println();
		}	
	}
}

class progrm101
{
	public static void main(String b[])
	{
		Pattern obhj=new Pattern(4,4);
		obhj.DisplayPattern();
	}
}