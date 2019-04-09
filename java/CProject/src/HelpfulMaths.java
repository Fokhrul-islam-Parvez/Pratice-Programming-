import java.util.*;
public class HelpfulMaths {
public static void main(String [] args)
{
	Scanner sc=new Scanner(System.in);
	String s=sc.nextLine();
	String s2="";
	int j=0,k,p;
	int a=s.length();
	int arr[]=new int[a];
	for(int i=0;i<a;i++)
	{
		char c=s.charAt(i);
		if(c=='+')
			k=0;
		else
		{
			p=Integer.valueOf(c);
			arr[j]=p;
			j++;
		}
		
	}
	for(int i=0;i<j;i++)
	{
		for(int l=0;l<j-i-1;l++)
		{
		if(arr[l]>arr[l+1])
		{
			k=arr[l];
			arr[l]=arr[l+1];
			arr[l+1]=k;
		}
		}
	}
	s2=s2+(char)arr[0];
	for(int i=1;i<j;i++)
	{
	    char s4=(char)arr[i];
		s2=s2+"+"+s4;
	}
	System.out.println(s2);
}
}
