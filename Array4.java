import java.lang.*;
import java.util.*;

class Array4
{
   public static void  main(String ar[])
   {
    int i=0,j=0;
	
    int arr[][]=new int[2][3];
	 
	arr[0][0]=11;
	arr[0][1]=11;
	arr[0][2]=11;
	arr[1][0]=11;
	arr[1][1]=11;
	arr[1][2]=11;


	
	for(i=0;i<arr.length;i++)
	{
	 for(j=0;j<arr[i].length;j++)
	 {
	   System.out.println(arr[i][j]);
	 }
	} 
	}
}
