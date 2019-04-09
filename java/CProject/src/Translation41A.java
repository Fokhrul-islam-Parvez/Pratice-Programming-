import java.util.*;
public class Translation41A {
public static void main(String arg[])
{
	Scanner sc=new Scanner(System.in);
	String s1=sc.nextLine();
	String s=sc.nextLine();
	StringBuffer s2=new StringBuffer(s);
	s2=s2.reverse();
	s=s2.toString();
	if(s1.compareTo(s)==0)
	{
		System.out.println("YES");
	}
	else
		System.out.println("NO");
}
}
