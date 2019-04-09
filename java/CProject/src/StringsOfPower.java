import java.util.*;
public class StringsOfPower {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		int l=s.length();
		long c1=0,d=0;
		for(int i=0;i<l;i++)
		{
			char c=s.charAt(i);
			if(c=='h' && i<=(l-5))
   		{ 
				String s1=s.substring(i, i+5);
				if(s1.equals("heavy"))
				{
					c1++;
					i=i+4;
				}
			}
			else if(c=='m' && c1>0 && i<=l-5)
			{
				String s1=s.substring(i, i+5);
				if(s1.equals("metal"))
				{
					d=d+(c1*1);
					i=i+4;
				}
				
			}
		}
		System.out.println(d);
	}

}
