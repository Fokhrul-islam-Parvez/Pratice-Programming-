import java.util.*;
public class HexAbonacci {
	static int a,b,c,d,e,f;
	static int fn(int n)
	{
		if(n==0)
			return a;
		if (n==1)
			return b;
		if (n==2)
			return c;
		if(n==3)
			return d;
		if(n==4)
			return e;
		if(n==5)
			return f;
		
		
		return (fn(n-1)+fn(n-2)+fn(n-3)+fn(n-4)+fn(n-5)+fn(n-6));
	}
public static void main(String []arg)
{
	Scanner sc=new Scanner(System.in);
	int tc=sc.nextInt();
	int n,cn=0;
	while(tc!=0)
	{
		tc--;
		a=sc.nextInt();
		b=sc.nextInt();
		c=sc.nextInt();
		d=sc.nextInt();
		e=sc.nextInt();
		f=sc.nextInt();
		n=sc.nextInt();
		cn++;
		System.out.println("Case "+cn+": "+fn(n)%10000007);
	}
}
}
