import java.lang.*;
import java.util.*;

class progrm212
{
	public static void main(String argf[])
	{
		Scanner sobhj=new Scanner(System.in);
		
		System.out.println("Enter first str");
		String str=sobhj.nextLine();
		
	    String arr[]=str.split(" ");
		
		HashMap<String,Integer>hobhj=new HashMap<>();
		int freq=0;
		for(String ch:arr)
		{
			System.out.println(ch);
			if(hobhj.containsKey(ch))
			{
				freq=hobhj.get(ch);
				hobhj.put(ch,freq+1);
			}
			else
			{
				hobhj.put(ch,1);
			}
		}
		
		Set<String> setobhj=hobhj.keySet();//keys cha column
		int iMax=0;
		String c=" ";
		for(String value:setobhj)
		{
			if(hobhj.get(value)>iMax)
			{
				iMax=hobhj.get(value);
				c=value;
			}
		}
		System.out.println(c+" word occurs "+iMax+" times ");
	}	
}