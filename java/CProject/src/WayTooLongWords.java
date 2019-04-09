import java.util.*;
public class WayTooLongWords {
public static void main(String [] args)
{
	
	Scanner sc =new Scanner (System.in);
	int n=sc.nextInt();
	String s=new String();
	while(n>=0)
	{
		s=sc.nextLine();
		int a=s.length();
		if(a>10) {
		char c= s.charAt(a-1);
		char c1=s.charAt(0);
		System.out.print(c1+"" + (a-2)+"" + c+"\n");
	
		}
		else
			System.out.print(s+"\n");
		n--;
	}
}
}
