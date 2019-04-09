import java.util.*;
public class CAPSlOCK {
	public static void main(String [] args)
	{
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		s=s.toLowerCase();
		String c="";
		String d="";
		d=d+s.charAt(0);
		d=d.toUpperCase();
		c=c+d;
		for(int i=1;i<s.length();i++)
		{
			c=c+s.charAt(i);
			
		}
       System.out.println(c);
		
	}

}
