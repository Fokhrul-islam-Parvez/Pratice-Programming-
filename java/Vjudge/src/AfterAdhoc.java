import java.util.*;
public class AfterAdhoc {
public static void main(String []arg)
{
	Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		if(n==0)
			return;
	//	String s1=sc.nextLine();
		String s=sc.nextLine();
		int p=s.length();
		n=p/n;
		for(int i=0;i<p;i=i+n)
		{
			StringBuffer sb1=new StringBuffer(s.substring(i, i+n)).reverse();
			System.out.print(sb1);
		}
		System.out.print('\n');
}
}
