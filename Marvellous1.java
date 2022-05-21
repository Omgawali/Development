import java.lang.*;

class Marvellous1
{
  public static void main(String arg[])
  {
    Area obhj=new Area();
    float fRet=0.0f;
    
    fRet=obhj.CalculateArea(10.5f);
    System.out.println("Area is:"+fRet);
    
    fRet=obhj.CalculateCircumfarance(10.5f);	
	System.out.println("Circumfarance is:"+fRet);
  }
}
interface Circle
{
  float PI=3.14f;
  
  float CalculateArea(float Radius);
  float CalculateCircumfarance(float Radius);   
}

class Area implements Circle
{
	public float CalculateArea(float Radius)
	{
		return (PI*Radius*Radius);
	}
    public float CalculateCircumfarance(float Radius)
	{
		return (2*PI*Radius);
	}	
}	


//346.185
//65.94