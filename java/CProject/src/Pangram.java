import java.util.*;
public class Pangram {
	public static void main(String [] args)
	{
		Scanner sc =new Scanner (System.in);
		int n=sc.nextInt();
		String s1=sc.nextLine();
		String s=sc.nextLine();
		s=s.toLowerCase();
		int a[]=new int[n];
		int k=0,d=0;
		for(int i=0;i<n;i++)
		{
			int c=s.charAt(i);
			a[i]=c;
		}
		
		for(int i=97;i<=122;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==a[j]) {
					k=1;
					break;
				}
					
			}
			if(k==0) {
				d=1;
				break;
			}
			k=0;
		}
		if(d==1)
			System.out.println("NO");
		else
			System.out.println("YES");
			
	}
}
