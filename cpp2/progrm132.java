import java.lang.*;
import java.util.*;

class Bitwise
{
	public boolean CheckBit(int no)
	{
	//21 bit i\s on or ogfgf
        int iMask=1048576;
		int iResult=0;
		iResult=no&iMask;
		
		if(iResult==0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

class progrm132
{
	public static void main(String arg[])
	{
		Scanner sobhj=new Scanner(System.in);
		System.out.println(":Enter number ");
		
		int value=sobhj.nextInt();
		System.out.println(value);
		
		Bitwise bobhj=new Bitwise();
		boolean bRet=bobhj.CheckBit(value);
		if(bRet==true)
		{
			System.out.println("Bit is on");
		}
		else
		{
			System.out.println("Bit is off");
		}
	}
}