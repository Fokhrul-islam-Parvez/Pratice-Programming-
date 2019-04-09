import java.util.*;
public class Notthe {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t>0)
		{
			t--;
			int n=sc.nextInt();
			int m=sc.nextInt();
			String s1=sc.nextLine();
			String s[]=new String[n];
			for(int i=0;i<n;i++)
			{
				s[i]=sc.nextLine();
			}
			int d=0,k=0,r=0;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					char c=s[i].charAt(j);
					if(c=='#')
						{
						  d++;
						  if(k==1)
							  break;
						}
				}
				if(k==0 && d!=0)
				{
					r=d;
					k=1;
					d=0;
				
				}
			}
			if(r==d+1)
				System.out.println("Square");
			else
				System.out.println("Rectangle");
				
		}

	}

}
