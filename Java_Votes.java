/* package codechef; // don't place package name! */
 
import java.util.Scanner;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int X,totalvalidvotes,validvotes;
		Scanner sc=new Scanner(System.in);
		X=sc.nextInt();
	    totalvalidvotes=X*80/100;   
	    validvotes=totalvalidvotes*45/100;
	    System.out.println(validvotes);
	}
}
