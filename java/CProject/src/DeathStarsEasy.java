import java.util.*;
public class DeathStarsEasy {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		String p=sc.nextLine();
		String s[]=new String[n*2];
		for(int i=0;i<n*2;i++)
			s[i]=sc.nextLine();
		int k=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
			char c=s[i].charAt(j);
			char c1=s[i+n].charAt(j);
			if(c!=c1)
			{
				k=1;
				break;
			}
			}
			if(k==1)
			{
				break;
			}
		}
		if(k==0)
		{
			System.out.println("Yes");
			return;
		}
		k=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				char c=s[i].charAt(j);
				char c1=s[n*2-1-j].charAt(n-i-1);
			if(c!=c1)
			{
				k=1;
				break;
			}
			}
			if(k==1)
			{
				break;
			}
		}
		if(k==0)
		{
			System.out.println("Yes");
			return;
		}
		k=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				char c=s[i].charAt(j);
				char c1=s[i+n].charAt(n-j-1);
				if(c!=c1)
				{
					k=1;
					break;
				}
				}
				if(k==1)
				{
					break;
				}
		}
		if(k==0)
		{
			System.out.println("Yes");
			return;
		}
		k=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				char c=s[i].charAt(j);
				char c1=s[n+j].charAt(i);
				if(c!=c1)
				{
					k=1;
					break;
				}
				}
				if(k==1)
				{
					break;
				}
		}
		if(k==0)
		{
			System.out.println("Yes");
			return;
		}
		k=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				char c=s[i].charAt(j);
				char c1=s[n*2-j-1].charAt(i);
				if(c!=c1)
				{
					k=1;
					break;
				}
				}
				if(k==1)
				{
					break;
				}
		}
		if(k==0)
		{
			System.out.println("Yes");
			return;
		}
		k=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				char c=s[i].charAt(j);
				char c1=s[n+j].charAt(n-i-1);
				if(c!=c1)
				{
					k=1;
					break;
				}
				}
				if(k==1)
				{
					break;
				}
		}
		if(k==0)
		{
			System.out.println("Yes");
			return;
		}
		else
			System.out.println("No");

	}

}
