import java.util.*;
public class InterestingDrink {
public static void main(String [] args)
{
	Scanner sc=new Scanner(System.in);
	int e=0,m=0,b=0, n=sc.nextInt();
	int a[]=new int[n];
	for(int i=0;i<n;i++) 
	{
		a[i]=sc.nextInt();
	}
	int q=sc.nextInt();
	int c[]=new int[q];
	for(int i=0;i<q;i++) 
	{
		c[i]=sc.nextInt();
	}
	Arrays.sort(a);
	for(int i=0;i<q;i++)
	{
		int l=1,h=n;
		e=0;m=0;
		while(l<=h)
		{
		   m=(l+h)/2;
			if(a[m]==c[i])
				{
				e=m+1;
				b=1;
				break;
				}
			else if(a[m]<c[i])
				l=m+1;
			else
				h=m-1;
		}
		if(b==0)
	    	e=m;
		if(c[i]>a[n-1])
			e++;
		if(c[i]<a[0])
			e=0;
	 System.out.println(e);
	 b=0;
	}
}
}
