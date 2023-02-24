//template for problems on numbers

import java.lang.*;
import java.util.*;

class Number 
{
	private int iNo;
	
	public void Accept()
	{
		Scanner sobhj=new Scanner(System.in);
		System.out.println("Enter number ");
		this.iNo=sobhj.nextInt();
	}
	
	public void Display()
	{
		System.out.println("Value is"+this.iNo);
	}
	//add function
}

class progrm102
{
	public static void main(String b[])
	{
		Number nobhj=new Number();
		
		nobhj.Accept();
		nobhj.Display();	
		
		nobhj.______();
	}
}