//singly linear linked list in java

import java.lang.*;
import java.util.*;

class node
{
	
	public int data;
	public node next;
}

class SinglyLL
{
	public node Head;
	public int Count;

	public SinglyLL()
	{
		Head=null;
		Count=0;
	}

	public void InsertFirst(int no)
	{
		node newn=new node();
		newn.data=no;
		newn.next=null;
		
		if(Head==null)
		{
			Head=newn;
		}
		else
		{
			newn.next=Head;
			Head=newn;
		}
		Count++;
	}


	public void InsertLast(int no)
	{
		node newn=new node();
		newn.data=no;
		newn.next=null;
		
		if(Head==null)
		{
			Head=newn;
		}
		else
		{
			node temp=Head;
			
			while(temp.next!=null)
			{
				temp=temp.next;
			}
			
		}
		Count++;
	}	
	public void Display()
	{
		node temp=Head;
		
		System.out.println("Elements of Linked list are:");
		while(temp!=null)
		{
			System.out.println("|"+temp.data+"|->");
			temp=temp.next;
		}
		System.out.println("Null");
	}
	
	public int CountNode()
	{
		return Count;
	}
	
	public void DeleteFirst()
	{
		if(Count==0)
		{
			return;
		}
		else if(Count==1)
		{
			Head=null;
		}
		else
		{
			node temp=Head;
			Head=Head.next;
			temp=null;
		}
		Count--;
	}
	
	public void DeleteLast()
	{
		if(Count==0)
		{
			return;
		}
		else if(Count==1)
		{
			Head=null;
		}
		else
		{
			node temp=Head;
			while(temp.next.next!=null)
			{
				temp=temp.next;
			}
			temp.next=null;
		}
		Count--;
	}
	
	public void InsertAtPos(int no,int pos)
	{
		if((pos<1)||(pos>Count+1))
		{
			return;
		}
		
		if(pos==1)
		{
			InsertFirst(no);
		}
		else if(pos==Count+1)
		{
			InsertLast(no);
		}
		else
		{
		node newn=new node();
		newn.data=no;
		newn.next=null;
		
		node temp=Head;
		
		for(int i=1;i<pos-1;i++)
		{
			temp=temp.next;
		}
		
		newn.next=temp.next;
		temp.next=newn;
		
		Count++;
		}
	}
	
		public void DeleteAtPos(int pos)
	{
		if((pos<1)||(pos>Count))
		{
			return;
		}
		
		if(pos==1)
		{
			DeleteFirst(no);
		}
		else if(pos==Count)
		{
			DeleteLast(no);
		}
		else
		{		
		node temp=Head;
		
		for(int i=1;i<pos-1;i++)
		{
			temp=temp.next;
		}
		
		temp.next=temp.next.next;
		
		
		Count--;
		}
	}
}

class progrm151
{
	public static void main(String str[])
	{
		SinglyLL obhj=new SinglyLL();
		
		obhj.InsertFirst(51);
		obhj.InsertFirst(71);
		obhj.InsertFirst(91);
		obhj.InsertFirst(101);
		obhj.Display();
		
		obhj.InsertAtPos(55,3);
		obhj.Display();
	}
}