import java.lang.*;

class Employee implements Cloneable
{
     public int EID;
     public String Ename;
     public int ESalary;

 	 public Employee(int id,String str,int no)
	 {
	    this.EID=id;
		this.Ename=str;
		this.ESalary=no;
	 }
	 
	 public Object clone() throws CloneNotSupportedException
	 {
		 return super.clone();
	 }
	 }
class Copy
{
    public static void main(String ar[]) throws Exception
	{
       Employee eobhj=new Employee(11,"Om",21000);
	   System.out.println("EID:"+eobhj.EID+"Name:"+eobhj.Ename+"ESalary :"+eobhj.ESalary);
	   Employee eobhjX=(Employee)eobhj.clone();
	   System.out.println("EID:"+eobhjX.EID+"Name :"+eobhjX.Ename+"ESalary :"+eobhjX.ESalary);
       eobhj.Ename="Shubham";
	  System.out.println("EID:"+eobhjX.EID+"Name :"+eobhjX.Ename+"ESalary :"+eobhjX.ESalary);
      
	}

}