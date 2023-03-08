
/*
Decimal       Hexadecimal           Binary
0                      0                        0000
1                       1                       0001
2                       2                       0010
3                       3                       0011
4                       4                       0100
5                       5                       0101
6                       6                       0110
7                       7                       0111
8                       8                       1000
9                       9                       1001
10                      A                      1010
11                      B                      1011
12                      C                       1100
13                      D                      1101
14                      E                      1110
15                      F                       1111
*/

import java.lang.*;
import java.util.*; 

class Bitwise
{
	public int OnBit(int no)
	{
	
        int iMask=0X00000240;   
		int iResult=0;
		iResult=no^iMask;
		
		return iResult;
	}
}

class Assignment31q4
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