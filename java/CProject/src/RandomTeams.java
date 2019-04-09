import java.util.*;
import java.math.*;
public class RandomTeams {
public static void main(String [] arg)
{
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	int m=sc.nextInt();
	int b,c,e,d,a;
	 a=n/m;
	 b=a*m;
     c=n-b;
	 d=m-c;
	 e=a-2;
	 double pk=((Math.sqrt(((2*a)+(1/3))*3.1419)*Math.pow(a,a)*Math.exp(-a)));
	 System.out.println(pk);
	 double p=(Math.round(Math.ceil(Math.sqrt(((2*a)+(1/3))*3.1416)*Math.pow(a,a)*Math.exp(-a))))/(2*(Math.round(Math.ceil(Math.sqrt(((2*e)+(1/3))*3.1416)*Math.pow(e,e)*Math.exp(-e)))));
	 System.out.println(p);
	 int r=(int)p;
	 System.out.println(r);
	 r=r*d;
	 a=a+1;
	 e=e+1;
	 p=(Math.round(Math.ceil(Math.sqrt(((2*a)+(1/3))*3.1416)*Math.pow(a,a)*Math.exp(-a))))/(2*(Math.round(Math.ceil(Math.sqrt(((2*e)+(1/3))*3.1416)*Math.pow(e,e)*Math.exp(-e)))));
	 int k=(int)p;
	 k=k*c;
	 r=r+k;
	 System.out.println(r);
}
}
