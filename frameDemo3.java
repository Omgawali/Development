





import java.lang.*;
import java.awt.*;
import java.awt.event.*;

class frameDemo3
{
	public static void main(String arg[])
	{
		System.out.println("Print the data on console");
	    MarvellousFrame mobhj=new MarvellousFrame("PPA");
	}
}

class MarvellousListener implements WindowListener
{
	public void windowDeactivated(WindowEvent obhj)
	{
		
	}
	public void windowActivated(WindowEvent obhj)
	{
		
	}
	public void windowDeiconified(WindowEvent obhj)
	{
		
	}
	public void windowIconified(WindowEvent obhj)
	{
		
	}
	public void windowClosed(WindowEvent obhj)
	{
		
	}
	public void windowClosing(WindowEvent obhj)
	{
		System.exit(0);
	}
	public void windowOpened(WindowEvent obhj)
	{
		
	}
}
class MarvellousFrame
{
    public Frame gfobhj;
	
	public MarvellousFrame(String name)
	{
	  gfobhj=new Frame(name);
	  gfobhj.setSize(600,600);
	  gfobhj.setVisible(true);
	  
      gfobhj.addWindowListener(new MarvellousListener());
	}
}