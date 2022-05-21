import java.lang.*;

abstract class RBI
{
  public int Balance;
  public RBI()
  {
    this.Balance=0;
  }
  
  public void Credit(int Amount)
  {
    this.Balance=this.Balance+Amount;
  }

  public void Debit(int Amount)
  {
    this.Balance=this.Balance-Amount;
  }
  
  public abstract int CalculateInterest();  
}

class SBI extends RBI     
{
   public int AccountNumber;
   public int IFSC;
   
   public int CalculateInterest()
   {
     return 6;
   }   
}


class PNB extends RBI     
{
   public int AccountNumber;
   public int IFSC;
   
   public int CalculateInterest()
   {
     return 7;
   }
}

class AbstractDemo
{
     public static void main(String ar[])
    {
	 PNB pobhj=new PNB();
     SBI sohj=new SBI();
     
     pobhj.Credit(1000);
     pobhj.Debit(200);	 
   
     System.out.println(pobhj.Balance);
	}
}