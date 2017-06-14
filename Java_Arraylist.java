package Arraylist;
import java.util.ArrayList;
import java.util.Scanner;
public class even_no 
{
	public static void main(String[] args)
	{
	int i,n;
	Scanner sc=new Scanner(System.in);
	n=sc.nextInt();
	ArrayList<Integer>arr=new ArrayList<Integer>(n);
	for(i=2;i<n;i=i+2)
	{
		arr.add(i);
		System.out.println(arr);
	}
	}
}
