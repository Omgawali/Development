
import java.io.*;
import java.util.*;

public class Assignment43q3
 {

    public static void main(String[] args) throws Exception
	{

		 Scanner sc= new Scanner(System.in);    //System.in is a standard input stream  
         System.out.print("enter ");  
	    File file=new File("C:\\"+sc.nextLine());

        // true if the directory was created, false otherwise
        if (file.mkdirs()) {
            System.out.println("Directory is created!");
        } else {
            System.out.println("Failed to create directory!");
        }

    }

}