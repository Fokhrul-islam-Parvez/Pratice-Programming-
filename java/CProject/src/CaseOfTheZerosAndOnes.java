import java.util.*;
public class CaseOfTheZerosAndOnes {
public static void main(String [] arg)
{
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	String s1=sc.nextLine();
	String s=sc.nextLine();
	int c0=0,c1=0;
	for(int i=0;i<n;i++)
	{
		char c=s.charAt(i);
		if(c=='0')
			c0++;
		else
			c1++;
	}
	int c=c1-c0;
	System.out.println(Math.abs(c));
	
}
}
