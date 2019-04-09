import java.util.*;
public class HQ9 {
public static void main(String [] a)
{
	Scanner sc=new Scanner(System.in);
	String s=sc.nextLine();
	int i;
	for(i=0;i<s.length();i++)
	{
	char c=s.charAt(i);
	if(c=='H') {
		System.out.println("YES");
		break;
	}
	else if(c=='Q')
	{
		System.out.println("YES");
		break;
	}
	else if(c=='9')
	{
		System.out.println("YES");
		break;
	}
	//else if(c=='+')
	//	System.out.println("YES");
	}
	
	if(i==s.length())
			System.out.println("NO");
}
}
