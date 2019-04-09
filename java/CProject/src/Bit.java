import java.util.*;
public class Bit {
public static void main(String [] args)
{
	Scanner sc=new Scanner(System.in);
	int t=sc.nextInt();
	int n=0;
	for(int i=0;i<t+1;i++)
	{
		String s=sc.nextLine();
		s=s.toUpperCase();
		if(s.equals("++X") || s.equals("X++"))
			{n++;
			}
		else if(s.equals("--X") || s.equals("X--"))
			
		{
			n--;
		}
	}
	System.out.println(n);
}
}
