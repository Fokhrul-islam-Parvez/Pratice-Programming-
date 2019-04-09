import java.util.*;
public class StonesOnTheTable {
	public static void main(String [] arg)
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		String s1=sc.nextLine();
		String s=sc.nextLine();
		int a=s.length();
		int d=0;
		for(int i=0;i<a-1;i++)
		{
		
			char c=s.charAt(i);
			char c2=s.charAt(i+1);
			if(c==c2)
				d++;
		}
		System.out.println(d);
	}
}
