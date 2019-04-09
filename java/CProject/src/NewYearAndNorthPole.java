import java.util.*;
public class NewYearAndNorthPole {
public static void main(String ar[])
{
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	int a[]=new int[n];
	String s[]=new String[n];
	for(int i=0;i<n;i++)
	{
		a[i]=sc.nextInt();
		s[i]=sc.nextLine();
	}
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			if(s[i].equals("South")!=true)
			{
				System.out.println("NO\n");
				break;
			}
		}
		else
		{
			
		}
		
			
	}
	
}
}
