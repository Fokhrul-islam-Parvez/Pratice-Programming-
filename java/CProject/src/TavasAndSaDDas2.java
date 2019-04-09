import java.util.*;
public class TavasAndSaDDas2 {
	static long a;
	static int c=0;
	static int call(int n)
	{
		int k=0;
		String s=Integer.toString(n);
		int l=s.length();
		
		for(int j=0;j<l;j++)
		{
			if(s.charAt(j)=='4' || s.charAt(j)=='7')
				k=1;
			else
			{
				k=0;
				break;
			}
		}
		if(k==1)
			c++;
		if(n==a)
			return c;
		return (call(n+1));
	}
public static void main(String arg[])
{
	Scanner sc=new Scanner(System.in);
	 a=sc.nextLong();
	 System.out.println(call(1));
}
}
