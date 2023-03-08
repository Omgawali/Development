
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
        public boolean ToggleBit(int iNo, int iPos)
        {
            if((iPos <=0) || (iPos > 32))
            {
                System.out.println("Invalid position");
                
            }

            int iMask = 0X00000001;
            int iResult = 0;

            iMask = iMask << (iPos-1);

            iResult = iNo ^ iMask;
           
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

class Assignment32q1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);  // 9th July

        System.out.println("Enter number ");
        int value = sobj.nextInt();

        System.out.println("Enter position ");
        int pos = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        boolean iRet = bobj.ToggleBit(value,pos);				
		if(iRet==true)
		{
			System.out.println("Bit is on");
		}
		else
		{
			System.out.println("Bit is off");
		}
	}
}
      
