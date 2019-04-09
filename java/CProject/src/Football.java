import java.util.*;
public class Football {
public static void main(String [] args)
{
	Scanner sc=new Scanner(System.in);
	int b=0,d=0;
	String s=sc.nextLine();
	int a=s.length();
	for(int i=0;i<a;i++)
	{
		char c=s.charAt(i);
		if(c=='1')
		{
			b++;
			if(b==7)
				break;
			d=0;
		}
		if(c=='0')
		{
			d++;
			if(d==7)
				break;
			b=0;
		}
	}
	if(b>=7 || d>=7)
		System.out.println("YES");
	else
		System.out.println("NO");
}
}
