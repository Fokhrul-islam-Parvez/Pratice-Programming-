import java.util.*;
public class Sub {

	public static void main(String [] args)
	{
		Scanner sc=new Scanner(System.in);
		 long m=sc.nextInt();
		 long n=sc.nextInt();
		 long w=sc.nextInt();
		    long a,b,c,d,e;
		    a=m/w;
		    b=m%w;
		    if(b!=0)
		        a++;
		    c=n/w;
		    d=n%w;
		    if(d!=0)
		        c++;
		    e=a*c;
		    System.out.println(e);
	}
}
