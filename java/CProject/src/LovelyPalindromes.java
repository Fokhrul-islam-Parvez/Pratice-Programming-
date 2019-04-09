import java.util.*;
public class LovelyPalindromes {
public static void main(String a[])
{
	Scanner sc= new Scanner(System.in);
	String n=sc.nextLine();
	StringBuffer sb=new StringBuffer(n);
	n=n+sb.reverse();
	System.out.println(n);
}
}
