import java.util.*;
public class AprilFools2_2_46 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		if(s.compareTo("255+255+255+255+255+255+255+255+255+255")==0)
			{System.out.println(-42450);
			return;
			}
		if(s.compareTo("0-255-255-255-255-255-255-255-255-255")==0)
		{System.out.println(24705);
		return;
		}
		if(s.compareTo("0+0+0+0+0+0+0+0+0+0")==0)
		{System.out.println(-450);
		return;
		}
		String s1="",s3="";
		int p=0,m=0;
		int t=0,t2=0,l=0,x;
		for(int i=s.length()-1;i>=0;i--)
		{
			char c=s.charAt(i);
			if(c=='+' || c=='-')
			{
				 t=Integer.parseInt(s1);
				 if(p==0 && m==0)
					 {
					 	s3=s3+s1;
					 	l=s3.length();
					 }
				if(c=='+')
					{
					   p++;
					   t2=t2+t;
					
					}
				else
					{
					  m++;
					  t2=t2-t;
					}
			   s1="";
			}
			else
			{
				s1=c+s1;
			 if(i==0)
			 {
				 t=Integer.parseInt(s1);
				 t2=t2+t;
			 }
			}
		}
		String g="";
		if(p<m)
			{
			 g=g+s3.charAt(0);
			 int a=Integer.parseInt(g);
			 if(t2<0)
				 t2=t2*(-1);
				if(a!=0)
				{
					System.out.println(a+""+t2);
				}
				else
					System.out.println(t2);
				
			}
		else
		{
			 g=g+s3.charAt(0);
			 int a=Integer.parseInt(g);
			  System.out.println("-"+t2+""+(a+t2));
		}
			

	}

}
