import java.util.Scanner;
public class PashmakAndFlowers {
	public static void main(String [] arg)
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		java.util.Arrays.sort(a);
		int s=a[0];
		int b=a[n-1];
		int d=b-s;
		long c=0,g=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]==s)
				c++;
			if(a[i]==b)
				g++;
		}
		System.out.println(d+" "+ ((int) Math.pow(c, g)));
	}
}
