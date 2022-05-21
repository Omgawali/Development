import java.lang.*;

class Employee
{
    public String name;
	public int Salary;
	
	public Employee(String str,int no)
	{
	   this.name=str;
       this.Salary=no;	   
	}
	
	public String toString()
    {
	   return "Employee name is"+name+"Having"+Salary;
	}	
	
	 }
class Object1
{
    public static void main(String ar[]) throws Exception
	{
        Employee eobhj=new Employee("Om",11000);
		System.out.println(eobhj.toString());
	}

}