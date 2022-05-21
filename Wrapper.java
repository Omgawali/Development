import java.lang.*;
import java.io.*;

class Wrapper
{
   public  static void main(String s[])throws IOException
   {
       int no=11;
	   Integer iobhj=new Integer(11);
	   
	   int i=iobhj;            //unboxing
	   
	   Integer iobhj2=no;    //boxing
	   
	   System.out.println(no);
	    System.out.println(iobhj);
		 System.out.println(i);
		  System.out.println(iobhj2);
	   
   }

}
