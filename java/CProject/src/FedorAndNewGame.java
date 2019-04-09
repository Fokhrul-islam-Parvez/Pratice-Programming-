import java.util.*;
public class FedorAndNewGame {
public static void main(String [] args)
{
	int c=0;
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	int m=sc.nextInt();
	int k=sc.nextInt();
	int num[]=new int[m+1];
	for(int i=0;i<m+1;i++)
		num[i]=sc.nextInt();
	for(int i=0;i<m+1;i++)
	{
		int a=Integer.bitCount(num[i]);
		if(n==k)
			k=k-1;
		if(a <= k) {
			c++;
		}
	}
	if(c==1)
		c=0;
	if(c==m+1)
		c=c-1;
	System.out.println(c);
	
	
}
}
