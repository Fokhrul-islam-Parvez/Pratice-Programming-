import java.util.*;
public class Main {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=0,c, n=sc.nextInt();
		int a[]=new int[n];
		int b[]=new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		for(int i=0;i<n;i++)
			b[i]=sc.nextInt();
		c=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[i]==b[j])
				{  c++;
			     break;
				}
			}
		 t=t+c;
		 c=0;
		}
  System.out.println(t);
	}
		
		}
