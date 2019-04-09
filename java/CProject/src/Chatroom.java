import java.util.*;
public class Chatroom {
	public static void main(String [] args)
	{
		Scanner sc=new Scanner(System.in);
		String s1=sc.nextLine();
		int i,h=0,e=0,l=2,o=0,d=0;
		String s3="";
		for(i=0;i<s1.length();i++)
		{
			char c=s1.charAt(i);
			if(c=='h'&& h==0)
			{
				s3=s3+c;
				h=1;
			}
			else if(c=='e' && h==1 && e==0)
			{
				s3=s3+c;
				e=1;
			}
			else if(c=='l' && h==1 && e==1 && l>0)
			{
				s3=s3+c;
				l--;
			}
			else if(c=='o'&& h==1 && e==1 && l==0 && o==0)
			{
				s3=s3+c;
				o=1;
			}
			if(s3.compareTo("hello")==0)
			{
				System.out.println("YES");

				d=1;
				break;
			}
		
			
		}
		if(d==0)
			System.out.println("NO");
			
		
	}

}
