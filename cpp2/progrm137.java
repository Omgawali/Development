import java.lang.*;
import java.util.*;

class Bitwise
{
	public int OnBit(int no)
	{
	//4 bit is on or off
        int iMask=0X00000008;   
		int iResult=0;
		iResult=no^iMask;
		
		return iResult;
	}
}

class progrm137
{
	public static void main(String arg[])
	{
		Scanner sobhj=new Scanner(System.in);
		System.out.println(":Enter number ");
		
		int value=sobhj.nextInt();
		System.out.println(value);
		
		Bitwise bobhj=new Bitwise();
		int bRet=bobhj.OnBit(value);
		
			System.out.println("Bit is on"+bRet);
		
	}
}