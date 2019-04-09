import java.util.*;
public class Hex_A_Bonacci {
	static int a, b, c, d, e, f;
	static int fn( int n ) {
	    if( n == 0 ) return a;
	    if( n == 1 ) return b;
	    if( n == 2 ) return c;
	    if( n == 3 ) return d;
	    if( n == 4 ) return e;
	    if( n == 5 ) return f;
	    return( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );
	}
	public static void main(String []arg) {
		Scanner sc=new Scanner(System.in);
	    int n, caseno = 0, cases=sc.nextInt();
	   
	    while(  cases>0) 
	    {
	    	cases--;
	        a=sc.nextInt();
	        b=sc.nextInt();
	        c=sc.nextInt();
	        d=sc.nextInt();
	        e=sc.nextInt();
	        f=sc.nextInt();
	        n=sc.nextInt();
	       System.out.println("Case "+(++caseno)+": "+(fn(n)));
	    }
	}
}
