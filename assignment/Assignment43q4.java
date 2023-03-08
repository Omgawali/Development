import java.util.*;
import java.io.*;

public class Assignment43q4
{

    public static void main(String[] args) throws IOException
	{

	    Scanner sc= new Scanner(System.in);    //System.in is a standard input stream  
        System.out.print("enter ");  
        String checksumSHA256 = DigestUtils.sha256Hex(new FileInputStream("C:\\"+sc.nextLine()));
        System.out.println("checksumSHA256 : " + checksumSHA256);

        System.out.print("enter ");  
        String checksumMD5 = DigestUtils.md5Hex(new FileInputStream("C:\\"+sc.nextLine()));
        System.out.println("checksumMD5 : " + checksumMD5);

    }
	
}