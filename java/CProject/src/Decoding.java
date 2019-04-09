import java.util.*;
public class Decoding {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		String s1=sc.nextLine();
		String s2="";
		String s=sc.nextLine();
		int k=0,l=0;
		for(int i=0;i<n;i++)
		{
			char c=s.charAt(i);
		   if(i==0)
			s2=s2+c;
			else if(i==1) {
		       if(n%2==0)
				{s2=s2+c;
			     k=1;}
			   else
				{s2=c+s2;
			    k=0;}
			}
			else
			{
				if(k==1)
					{s2=c+s2;
					  k=0;
					}
				else
				{
					s2=s2+c;
					k=1;
				}
				
				
			}
			
			
		}
		System.out.println(s2);
	}

}
