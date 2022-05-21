import java.lang.*;

class ClassInfo
{
   public static void main(String Arg[])
   {
      Demo obhj=new Demo();
	  
	  Class cref=obhj.getClass();
	  System.out.println("Class name ogf obhj:"+cref.getName());
	  
	  String str="Marvellous";
      	  
	  Class cref1=str.getClass();
	  System.out.println("Class name ogf obhj:"+cref1.getName());	  
	  }
   
}