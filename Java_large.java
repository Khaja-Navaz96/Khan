package Largest_number;
import java.util.Arrays;
import java.util.Scanner;
public class largest_number 
{
	public static void main(String[] arg)
	{
		int i,a[] = new int[25];
		Scanner sc=new Scanner(System.in);
		for(i=0;i<25;i++)
		{
			a[i]=sc.nextInt();
		}
		Arrays.sort(a);
		System.out.println(a[24]);
	}
}
