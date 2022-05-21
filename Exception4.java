import java.lang.*;
import java.util.*;

class Exception4
{
   public static void main(String a[])
   {
      int Arr[]={10,20,30,40,50};
	  Scanner sobhj=new Scanner(System.in);
	  
	  System.out.println("Enter the index");
	  int index=sobhj.nextInt();
	  try
	  {
	    System.out.println("Inside try");
	    System.out.println("Element at that Index is"+Arr[index]);
	  }
	  catch(ArrayIndexOutOfBoundsException obhj)
	  {
	    System.out.println("Inside catch");
		System.out.println(obhj);
	  }
	  catch(Exception obhj)
	  {
	    System.out.println(obhj);	  
	  }
	  finally
	  {
	    System.out.println("Inside Finally");
		sobhj.close();
	  }
	  System.out.println("End ogf application");
	  
   }

}