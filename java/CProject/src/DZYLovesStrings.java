import java.util.*;
public class DZYLovesStrings {
public static void main(String arg[])
{
	Scanner sc=new Scanner(System.in);
	String s=sc.nextLine();
	int l=s.length();
	int a=sc.nextInt();
	int b[]=new int[200];
	int k='z';  
	int lr=0;
	for(int i='a';i<=k;i++)
	{
		b[i]=sc.nextInt();
		if(lr<b[i])
			lr=b[i];
	}
	long to=0;
for(int i=0;i<l;i++)
{
	int a2=s.charAt(i);
	to=to+(i+1)*b[a2];
}

for(int i=l+1;i<=l+a;i++)
{
	to=to+i*lr;
}
	System.out.println(to);
}
}