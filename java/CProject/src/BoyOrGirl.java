import java.util.*;
public class BoyOrGirl {
public static void main(String [] args)
{
	Scanner sc=new Scanner(System.in);
	String s=sc.nextLine();
	byte c;
	int t=s.length();
	byte [] b=s.getBytes();
	for(int i=0;i<s.length();i++)
	{
		for(int j=0;j<s.length()-1-i;j++)
		{
			if(b[j]<b[j+1])
			{
				c=b[j];
				b[j]=b[j+1];
				b[j+1]=c;
			}
		}
	}
	for(int i=0;i<s.length()-1;i++)
	{
		int d=0;
		if(b[i]==b[i+1])
			d++;
		t=t-d;
	}
	if(t%2==0)
		System.out.print("CHAT WITH HER!");
	else
		System.out.print("IGNORE HIM!");
}
}
