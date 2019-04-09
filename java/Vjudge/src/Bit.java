import java.util.*;
public class Bit {
public static void main(String []a)
{
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	String si=sc.nextLine();
	int c=0;
	while(n>0)
	{
		n--;
		String s=sc.nextLine();
		if(s.equals("X++")|| s.equals("++X"))
		{
			c++;
		}
		if(s.equals("X--")|| s.equals("--X"))
		{
			c--;
		}
	}
	System.out.println(c);
}
}
