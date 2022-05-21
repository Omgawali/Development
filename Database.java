import java.lang.*;
import java.sql.*;    

class Database
{
	public static void main(String argf[])
	{
		try 
		{ 
			Class.forName("com.mysql.jdbc.Driver");
			
			Connection con=DriverManager.getConnection("jdbc::mysql://localhost::3306/marvellous","root","root");
            
			Statement stmt=con.createStatement();
			
			ResultSet rs=stmt.executeQuery("select * from student");
			
			while(rs.next())
			{
				System.out.println(rs.getInt(1)+""+rs.getString(2)+""+rs.getInt(3)+""+rs.getString(4));
			}
			con.close();
		}
		catch(Exception obhj)
		{
			System.out.println("Exception occured"+obhj);
		} 
	}
}