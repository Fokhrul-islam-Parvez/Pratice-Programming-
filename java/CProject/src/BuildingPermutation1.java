import java.util.*;
import java.math.*;
public class BuildingPermutation1 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n, i,j,s,c=0;
	    n=sc.nextInt();
	    long t=0,t1=0,t2=0,t3=0,t4=0,t0;
	  int a[]=new int[n];
	    for(i=0;i<n;i++)
	    {
	        a[i]=sc.nextInt();
	        if(a[i]<=n)
	        	t=t+a[i];
	        else
	        	c++;
	    }
	    Arrays.sort(a);
	    t1=((long)n-c)*(((long)n-c)+1)/2;
	    t3=Math.abs(t-t1);
	    for(i=n-c;i<n;i++)
	    {
	    	t4=t4+a[i]-((n-c)+1);
	    	c--;
	    } 
	    t2=t4+t3;
	    System.out.println(t2);
	}

}
