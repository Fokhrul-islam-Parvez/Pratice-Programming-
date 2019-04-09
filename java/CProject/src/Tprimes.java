import java.util.*;
public class Tprimes {
public static void main(String [] args)
{
	Scanner sc=new Scanner(System.in);
	    int n;
	    int j,p;
	    long i,k,c=0;
	    n=sc.nextInt();
	     long a[]=new long[n];
	    for(j=0;j<n;j++)
	        a[j]=sc.nextLong();
	    for(j=0;j<n;j++)
	    { p=1;
	      c=0;
	        for(i=1;i<=a[j];i++)
	        {
	            if(a[j]%i==0){
	                c++;
	            }
	        }
	        
	        if(c==2 || c==1)
	        {
	        	 System.out.println("NO");
	             continue;
	        }

	        for(k=2;k<c;k++)
	        {
	            if(c%k==0)
	            {
	                p=0;
	                break;
	            }
	        }
	        if(p==1)
	        	 System.out.println("YES");
	        else

	        	 System.out.println("NO");
	    }
}
}
