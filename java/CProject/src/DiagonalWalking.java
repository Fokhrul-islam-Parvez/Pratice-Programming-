import java.util.*;
public class DiagonalWalking {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		String s1=sc.nextLine();
		String s=sc.nextLine();
		int t=0;
		for(int i=0;i<n-1;i++)
		{
			char c=s.charAt(i);
			char c1=s.charAt(i+1);
			if(c=='U')
			{
				if(c1=='R')
				{
					t++;
					i++;
				}
			}
			else if(c=='R')
			{
				if(c1=='U')
					{t++;
					 i++;
					}
				
			}
		}
		System.out.println((n-t));

	}

}
