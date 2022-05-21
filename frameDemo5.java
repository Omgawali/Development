





import java.lang.*;
import java.awt.*;
import java.awt.event.*;
class Demo
{
	public String DataDe()
	{
		return "jay ganesh";
	}
}
class frameDemo5
{

	public static void main(String arg[])
	{
		System.out.println("Print the data on console");
	    MarvellousFrame mobhj=new MarvellousFrame("PPA");
	}
}

class MarvellousFrame  extends WindowAdapter implements ActionListener
{
    public Frame gfobhj;
	
	public Button bobhj;
	public TextField tobhj;
	
	public MarvellousFrame(String name)
	{
	  gfobhj=new Frame(name);
	  
	   bobhj=new Button("Save");
	   tobhj=new TextField();
	   
	   tobhj.setBounds(60,60,170,20);
	   bobhj.setBounds(110,130,90,20);
        
	   
	   gfobhj.add(bobhj);
	   gfobhj.add(tobhj);
	   
	   
	  gfobhj.setSize(600,600);
	  gfobhj.setVisible(true);
	  gfobhj.setLayout(null);
	  
	  bobhj.addActionListener(this);
      gfobhj.addWindowListener(this);
	  
	}
	
	public void windowClosing(WindowEvent obhj)
	{
		System.exit(0);
	}
	public void actionPerformed(ActionEvent obhj)
	{
		Demo dobhj=new Demo();
		String str=dobhj.DataDe();
		tobhj.setText(str);
	}
}