import java.util.*;
public class Eleven {
	static int check(int a)
	{
		if (a <= 1) return a;
        else return check(a-1) + check(a-2);
		
	}
	
	public static void main(String [] args)
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int b[]=new int[n+1];
		for(int i=0;i<=n;i++)
		{
			b[i]=0;
		}
		for(int i=1;;i++)
		{
			int k=check(i);
			if(k>n)
				break;
			b[k]=1;
		}
		for(int i=1;i<n+1;i++)
		{
			if(b[i]==1)
				System.out.print("O");
			else
				System.out.print("o");
		}
		
	}
}
