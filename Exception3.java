import java.lang.*;
import java.util.*;

class Exception3
{
 public static void main(String a[])
 {
   int Arr[]={10,20,30,40,50};
   Scanner sobhj=new Scanner(System.in);
   
   System.out.println("Enter thje index");
   int index=sobhj.nextInt();
   
   try
   {
	   System.out.println("inside try");
   System.out.println("Element at thjat index"+Arr[index]);
   }
    catch(ArrayIndexOutOfBoundsException obj)
   {
	   System.out.println("inside catch");
	   System.out.println(obj);
   }
   catch(Exception obj)
   {
	   System.out.println(obj);
   }
   finally
   {
	System.out.println("ginside ");   
   }
  System.out.println("End ogf app");
 }
}