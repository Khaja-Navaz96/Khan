package Largest_number;
import java.util.Scanner;
public class Factorial 
{
	public static void main(String[] arg)
	{
		int n,i,fact=1;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		for(i=n;i>0;i--)
		{
			fact=fact*i;
		}
		System.out.println(fact);
	}
}
