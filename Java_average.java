/* package codechef; // don't place package name! */

import java.util.Scanner;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int i,n,avg,sum=0; int a[]= new int[20];
		Scanner sc=new Scanner(System.in);
		for(i=0;i<10;i++)
		{
		    a[i]=sc.nextInt();
		    sum=sum+a[i];
		}
		avg=sum/10;
		System.out.println(avg);
	}
}
