import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
		Scanner s=new Scanner(System.in);
        String S=s.next();
        int b=S.length();
        char []c=new char[b];char []d=new char[100];
        String a=s.next();
        for(int i=0;i<b;i++)
        {
            c[i]=S.charAt(i);
        }
        for(int i=0;i<b;i++)
        {
            if(a.equals(c[i]))
            {
                break;
            }
            else 
            System.out.printl(c[i]);
        }
	}
}
