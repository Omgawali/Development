import java.lang.*;
import java.util.*;

class Input
{
	public static void main(String a[])
	{
		Scanner sobhj=new Scanner(System.in);
        System.out.println("Enter your name");
        String name=sobhj.nextLine();
         
        System.out.println("Enter your age");	
        int Age=sobhj.nextInt();
		  
        System.out.println("Enter your percentage");
        float percentage=sobhj.nextFloat();
           
        System.out.println(" your  name is"+name);
        System.out.println(" your age is"+Age);
        System.out.println(" your  per is"+percentage);		 
		sobhj.close();
	}
}