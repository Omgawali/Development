import java.lang.*;

class Demo
{
 public int Add(int i,int j)
 {
   return i+j;
 }

 public int Add(int i,int j,int k)
 {
   return i+j+k;
 }
 public int Add(int i,int j,int k,int z)
 {
   return i+j+k+z;
 } 
}

class Overloading
{
  public static void main(String a[])
  {
    Demo obhj=new Demo();
	int ret=0;
	ret=obhj.Add(10,20);
	System.out.println(ret);
    ret=obhj.Add(10,20,30);
	System.out.println(ret);
	ret=obhj.Add(10,20,30,40);
	System.out.println(ret);
  }

}