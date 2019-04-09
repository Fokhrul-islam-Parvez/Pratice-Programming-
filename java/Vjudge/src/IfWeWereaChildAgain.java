import java.math.BigInteger;
import java.util.*;
public class IfWeWereaChildAgain {
	private static final String EOF = null;

	public static void main(String []arg)
	{
		Scanner sc=new Scanner(System.in);
		String s;
		while((s=sc.nextLine())!=EOF)
		{
			String a=s.substring(0,(s.indexOf(" ")));
			String b=s.substring((s.lastIndexOf(" ")+1),s.length());
			int sy;
			char c;
			if(s.indexOf('/')!=-1)
				c= s.charAt((s.indexOf('/')));
			else 
				c=s.charAt((s.indexOf('%')));
			BigInteger bi= BigInteger.valueOf(Long.parseLong(a));
			BigInteger ib= BigInteger.valueOf(Long.parseLong(b));
			if(c=='/')
			{
				System.out.println(bi.divide(ib));
			}
			else
			{
				BigInteger bii[] = bi.divideAndRemainder(ib);
				System.out.println(bii[1]);
			}
		}
	}
}
