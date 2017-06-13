/* package codechef; // don't place package name! */
 
import java.util.Scanner;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int X,Y,trainspeed;
		Scanner sc=new Scanner(System.in);
		X=sc.nextInt();
		Y=sc.nextInt();
		if((X>0)&&(Y>0))
		{
			trainspeed=(X*Y)+(5*5/18);
			System.out.println(trainspeed+"m/sec");
		}
		else
		{
			System.out.println("Values Negative or Zero");
		}
	}
}
