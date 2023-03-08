import java.lang.*;
import java.util.*;  
import java.io.*;  
public class  Assignment42q4   
{  
public static void main(String[] args)   
{     
 Scanner sc= new Scanner(System.in);    //System.in is a standard input stream  
              System.out.print("enter file name");  
	       File file=new File("C:\\Users\\Divya\\Desktop\\pp\\LB\\1prgrm\\"+sc.nextLine());
boolean result;  
try   
{  
result = file.createNewFile();  //creates a new file  
if(result)      // test if successfully created a new file  
{  
System.out.println("file created "+file.getCanonicalPath()); //returns the path string  
}  
else  
{  
System.out.println("File already exist at location: "+file.getCanonicalPath());  
}  
}   
catch (IOException e)   
{  
e.printStackTrace();    //prints exception if any  
}         
}  }