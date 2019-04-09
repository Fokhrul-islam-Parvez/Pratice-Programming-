import java.util.*;
import java.lang.*;
import java.io.*;
public class Antipalindrome {
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		String s2="";
		int l=s.length();
		 StringBuilder s1 = new StringBuilder();
		s1.append(s);
		s1 = s1.reverse();
		s2= s1.toString();
		int k=0;
		if(s.equals(s2))
			{
			   for(int i=0;i<l-1;i++)
			   {
				   char c=s.charAt(i);
				   char c1=s.charAt(i+1);
				   if(c!=c1)
				   {
					   System.out.println((l-(i+1)));
					   k=1;
					   break;
				   }
			   }
			   if(k==0)
				   System.out.println(0);
				
			}
		else
			System.out.println(l);
	}
}
