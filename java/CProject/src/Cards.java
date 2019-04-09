import java.util.*;
public class Cards {
public static void main(String []a)
{
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	int p[]=new int[n];
	int q[]=new int[n];
	for(int i=0;i<n;i++)
	{
		p[i]=sc.nextInt();
		q[i]=p[i];
	}
	Arrays.sort(p);
	for(int i=0,j=n-1;i<n;i++,j--)
	{
	   for(int k=0;k<n;k++)
	   {
		   if(p[i]==q[k])
		   {
			   System.out.print((k+1)+" ");
			   q[k]=0;
			   break;
		   }
	   }
	   for(int k=0;k<n;k++)
	   {
		   if(p[j]==q[k])
		   {
			   System.out.println((k+1));
			   q[k]=0;
			   break;
		   }
	   }
	}
}
}
