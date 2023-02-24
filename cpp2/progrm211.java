import java.lang.*;
import java.util.*;

class progrm211
{
	public static void main(String argf[])
	{
		Scanner sobhj=new Scanner(System.in);
		
		System.out.println("Enter first str");
		String str=sobhj.nextLine();
		
		char Arr[]=str.toCharArray();
		
		HashMap<Character,Integer>hobhj=new HashMap<>();
		int freq=0;
		for(char ch:Arr)
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
		Set<Character> setobhj=hobhj.keySet();//keys cha column
		int iMax=0;
		char c=' ';
		for(char value:setobhj)
		{
			if(hobhj.get(value)>iMax)
			{
				iMax=hobhj.get(value);
				c=value;
			}
		}
		System.out.println(c+" occurs "+iMax+" maximum times ");
	}	
}