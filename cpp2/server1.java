//
//
import java.lang.*;
import java.net.*;
import java.io.*;

class Server1
{
	public static void main(String arg[])throws Exception
	{
		System.out.println("Server application is running");
		 String s1,s2;
		
		ServerSocket ss=new ServerSocket(1100); 
		Socket s=ss.accept();
		System.out.println("Connection successful");
	    BufferedReader brk=new BufferedReader(new InputStreamReader(System.in));
		BufferedReader br=new BufferedReader(new InputStreamReader(s.getInputStream()));
        PrintStream ps=new PrintStream(s.getOutputStream());

		while((s1=br.readLine())!=null)
	    {
			System.out.println("Client says :"+s1);
			System.out.println("Enter message for client :");
			s2=brk.readLine();
			ps.println(s2);
		}
     s.close();
     ss.close();	 
	 br.close();
	 brk.close();
	 ps.close();
	}    	
}