import java.lang.*;

class Array1
{
   public static void  main(String ar[])
   {
	   int iCnt=0;
     int arr[]=new int [5];
	 arr[0]=10;
	 arr[1]=20;
	 arr[2]=30;
	 arr[3]=40;
	 arr[4]=50;
	 
	 System.out.println("Size ogf array is :"+arr.length);  //length is property in java
     System.out.println("Data by  gfor loop"); 
	 
	 for(iCnt=0;iCnt<arr.length;iCnt++)
	 {
	   System.out.println(arr[iCnt]); 
	 }
	 
	 System.out.println("Data by whjile loop");
	 iCnt=0;
	 while(iCnt<arr.length) 
	 {
		System.out.println(arr[iCnt]);
        iCnt++;		
	 }
	 
	 System.out.println("Data by  for loop  "); 
     for(int no:arr)	
     {
		 System.out.println(no); 
	 }		 
   }

}