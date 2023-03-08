import java.io.*;
import java.util.*;

public class Assignment43q5
 {
     public static void main(String a[]) 
     {
		
		
		 Scanner sc= new Scanner(System.in);    //System.in is a standard input stream  
         System.out.print("enter file name");  
	    File file=new File("C:\\"+sc.nextLine());
       
        String[] fileList = file.list();
        try
		{
		for(String name:fileList)
		{
			if (file.exists()) {

            // size of a file (in bytes)
           long bytes = file.length();

          

            System.out.println(String.format("%d bytes", bytes));
           

            System.out.println(name);
        }
		}
		}
		catch(NullPointerException e) {
			System.out.println("NullPointerException thrown!");
		}
		}
		 
    }