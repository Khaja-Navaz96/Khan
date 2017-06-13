/* package codechef; // don't place package name! */
 
import java.util.Scanner;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int y;float x,len;
		x=sc.nextFloat();
		y=sc.nextInt();
		if((x>0)&&(y>0))
		{
			x=x*5/18;
			len=x*y;
			System.out.println(len+"m");
		}
		else
		{
			System.out.println("Values Negative or Zero");
		}
	}
}
