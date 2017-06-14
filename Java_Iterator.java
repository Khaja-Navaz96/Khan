package Arraylist;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Scanner;
public class String_Iterator 
{
	public static void main(String[] args)
	{
	ArrayList<String> list=new ArrayList<String>();
	list.add("A.");
	list.add("Khaja");
	list.add("Navaz");
	list.add("Khan");
	Iterator itr=list.iterator();
	for(String s:list)
	{
	System.out.println(s);
	}
	}
}
