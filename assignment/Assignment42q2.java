import java.io.*; 
import java.lang.*; 
import java.util.*;
public class Assignment42q2 
{  
    public static void main(String args[]){    
         try{    
		 Scanner sc= new Scanner(System.in);    //System.in is a standard input stream  
              System.out.print("enter file name");  
	       File file=new File("C:\\Users\\Divya\\Desktop\\pp\\LB\\1prgrm\\"+sc.nextLine());
          FileInputStream fis=new FileInputStream(file);
			System.out.println("File contents");
			int r=0;
			
			while((r=fis.read())!=-1)
			{
				
				System.out.print((char)r);
			}
			  FileWriter fw=new FileWriter(file); 			
           
			if((r=fis.read())==-1)
				{
					 fw.write("Welcome to javaTpoint."); 
				}
		
         
          }catch(Exception e){System.out.println(e);}    
           
     }    
}  

