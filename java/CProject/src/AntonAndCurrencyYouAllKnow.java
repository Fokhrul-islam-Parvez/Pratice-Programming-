import java.util.*;
public class AntonAndCurrencyYouAllKnow {
public static void main(String arg[])
{
	Scanner sc=new Scanner (System.in);
	String s=sc.nextLine();
	int l=s.length();
	int a=0,k=0;
	int arr[]=new int[l];
	for(int i=0;i<l;i++)
	{
		char c=s.charAt(i);
		String s1=String.valueOf(c);
		int i1=Integer.parseInt(s1);
		arr[i]=i1;
	}
	int c=0;
	a=l;
	for(int i=0;i<l;i++)
	{
		if(arr[i]%2==0)
		{
			c=1;
			int n=arr[l-1];
			if(n%2==0)
			{
				l=l-1;
				i--;
				continue;
				
			}
			arr[l-1]=arr[i];
			arr[i]=n;
			l=l-1;
		}
	}
	if(c!=0)
	for(int i=0;i<a;i++) {
	System.out.print(arr[i]);
	if(i==a-1)
	System.out.println();
	}
	else
		System.out.println("-1");
		
}
}
