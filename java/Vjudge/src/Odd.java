import java.util.*;
public class Odd {
public static void main(String []arg)
{
	Scanner sc=new Scanner(System.in);
	 int t,x=0,f=0;
	   t=sc.nextInt();
	    while(t>0)
	    {
	        t--;
	        x++;
	        int a,b;
	       a=sc.nextInt();
	       b=sc.nextInt();
	          if(a!=1)
	            {a--;
	        f=(int) Math.pow((((a-1)/2)+1),2);}
	        int k=(((b-1)/2)+1);
	        int s=(int) Math.pow(k,2);
	        System.out.println("Case "+x+": "+(s-f));
	        f=0;
	    }
}
}
