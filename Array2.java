import java.lang.*;
import java.util.*;

class Array2
{
   public static void  main(String ar[])
   {
      int iCnt=0;
     Scanner sobhj=new Scanner(System.in);
	 System.out.println("Enter number of element");
	 int size=sobhj.nextInt();
	 
     int Arr[]=new int [size];

	 
	 System.out.println("Enter number ogf element");
     
	 
	 for(iCnt=0;iCnt<Arr.length;iCnt++)
	 {
	   Arr[iCnt]=sobhj.nextInt();
	 }
	 
	  System.out.println("Elements if array are");
	 for(iCnt=0;iCnt<Arr.length;iCnt++)
	 {
	   System.out.println(Arr[iCnt]); 
	 }

   }

}