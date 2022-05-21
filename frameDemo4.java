


import java.lang.*;
import java.awt.*;
import java.awt.event.*;

class frameDemo4
{
	public static void main(String arg[])
	{
		System.out.println("Print the data on console");
	    MarvellousFrame mobhj=new MarvellousFrame("PPA");
	}
}

class MarvellousListener extends WindowAdapter          //implements WindowListener
{
	
	public void windowClosing(WindowEvent obhj)
	{
		System.exit(0);
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