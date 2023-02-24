import java.lang.*;
import java.util.*;

class progrm207
{
	public static void main(String argf[])
	{
		Scanner sobhj=new Scanner(System.in);
		
		System.out.println("Enter stringf");
		String str1=sobhj.nextLine();
		
		System.out.println("Enter rotated stringf");
		String str2=sobhj.nextLine();
		
		if(str1.length()!=str2.length())
		{
			System.out.println("not rotatation");
			return;
		}
		
		String str3=str1+str1;
		if(str3.contains(str2))
		{
			System.out.println("rotation");
		}
		else
		{
			System.out.println("not rotation");
		}
	}	
}